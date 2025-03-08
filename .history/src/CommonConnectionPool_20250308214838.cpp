#include "pch.h"
#include "CommonConnectionPool.h"
#include "public.h"

// 私有化构造函数
ConnectionPool::ConnectionPool()
{
    // 这里可以初始化连接池，如创建数据库连接等
}

// 提前创建单例实例（饿汉模式），程序启动时即初始化，线程安全
ConnectionPool* ConnectionPool::_connPool = new ConnectionPool();

// 获取单例对象
ConnectionPool* ConnectionPool::GetInstance()
{
    return _connPool;
}

// 从配置文件中加载配置项
bool ConnectionPool::loadConfigFile()
{
    FILE* pf = fopen("../src/mysql.ini", "r");
    if (pf == nullptr) {
        LOG("mysql.ini file is not exist!");
        return false;
    }

    while (!feof(pf)) {
        char line[1024] = { 0 };
        fgets(line, 1024, pf);
        string str = line;
        int idx = str.find("=", 0);
        if (idx == -1) { // 无效配置项
            continue;
        }

        // password=12345678
        int endIdx = str.find("\n", idx);
        string key = str.substr(0, idx);
        string value = str.substr(idx + 1, endIdx - idx - 1);

        if (key == "ip") {
            _ip = value;
        } else if (key == "port") {
            _port = atoi(value.c_str()); // atoi:string -> int  c_str():string转char*
        } else if (key == "username") {
            _username = value;
        } else if (key == "password") {
            _password = value;
        } else if (key == "dbname") {
            _dbname = value;
        } else if (key == "initSize") {
            _initSize = atoi(value.c_str());
        } else if (key == "maxSize") {
            _maxSize = atoi(value.c_str());
        } else if (key == "maxIdleTime") {
            _maxIdleTime = atoi(value.c_str());
        } else if (key == "connectionTimeout") {
            _connectionTimeout = atoi(value.c_str());
        }
    }
    return true;
}

// 连接池的构造
ConnectionPool::ConnectionPool()
{
    // 加载配置文件了
    if (!loadConfigFile()) {
        return;
    }

    // 创建初始数量的连接
    for (int i = 0; i < _initSize; i++) {
        Connection* conn = new Connection();
        conn->connect(_ip, _port, _username, _password, _dbname);
        _connectionQueue.push(conn);
        _connectionCnt++;
    }

    // 启动一个新的线程，作为连接的生产者  linux thread -> pthread_create
    thread produce(std::bind(&ConnectionPool::produceConnectionTask, this));
}