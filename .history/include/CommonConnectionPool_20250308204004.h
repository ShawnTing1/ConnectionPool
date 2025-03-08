/*
实现连接池功能模块
*/

#include <iostream>
#include <queue>
#include <mutex>

#include "public.h"
#include "Connection.h"

using namespace std;

class ConnectionPool
{
public:
    // 获取线程池对象
    static ConnectionPool* GetInstance(); //获取连接池对象, static静态函数, 通过类名直接调用
private:
    ConnectionPool() {}; //单例模式, 构造函数私有化, 饿汉模式，天然线程安全
    static ConnectionPool* _connPool; //饿汉模式，天然线程安全};

    bool loadConfigFile();

    string _ip; // mysql的ip地址
    unsigned short _port; // mysql的端口号
    string _username; // mysql的用户名
    string _password; // mysql的密码
    string _initSize; // 连接池的初始连接量
    string _maxSize; // 连接池的最大连接量
    string _maxIdleTime; // 连接池的空闲时间
    string _connectionTimeOut; // 连接池获取连接的超时时间

    queue<Connection*> _connQueue; // 存储mysql连接的队列
    mutex _queueMutex; // 维护连接队列的线程安全的互斥锁
};