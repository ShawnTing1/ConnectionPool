#include "pch.h"
#include "CommonConnectionPool.h"
#include "public.h"

// // 提前创建单例实例（饿汉模式），程序启动时即初始化，线程安全
// ConnectionPool* ConnectionPool::_connPool = new ConnectionPool();

ConnectionPool* ConnectionPool::getConnectionPool()
{
    static ConnectionPool pool;
    return &pool;
}

// 从配置文件中加载配置项
bool ConnectionPool::loadConfigFile()
{
    FILE* pf = fopen("mysql.ini", "r");
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

        cout << "key: " << key << ", value: " << value << endl;

    }
    return true;
}