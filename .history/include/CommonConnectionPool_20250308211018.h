/*
实现连接池功能模块
*/

#include <iostream>
#include <queue>
#include <mutex>
#include <string>

#include "Connection.h"

using namespace std;

class ConnectionPool
{
public:
    // 获取连接池对象实例
    static ConnectionPool* getConnectionPool();

    // 从配置文件中加载配置项
    bool loadConfigFile();
private:
    ConnectionPool(); // 单例模式，构造函数私有化


    
    string _ip; // mysql的ip地址
    unsigned short _port; //mysql的端口号 3306
    string _uername; // mysql登陆用户名
    string _password; //mysql登陆密码
    int _initSize; // 连接池的初始连接量
    int _maxSize; // 连接池的最大连接量
    int _maxIdleTime; // 连接池的最大空闲时间
    int _connectionTimeout; // 连接池获取连接的超时时间

    queue<Connection*> connectionQueue; // 存储mysql连接的队列
    mutex _queueMutex; // 维护连接队列的线程安全互斥锁
};