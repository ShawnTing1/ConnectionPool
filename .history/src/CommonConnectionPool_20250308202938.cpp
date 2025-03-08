#include "pch.h"
#include "CommonConnectionPool.h"



// 获取单例对象
ConnectionPool* ConnectionPool::GetInstance()
{
    return _connPool;
}

// 私有化构造函数
ConnectionPool::ConnectionPool()
{
    // 这里可以初始化连接池，如创建数据库连接等
}

// 私有化析构函数
ConnectionPool::~ConnectionPool()
{
    // 这里可以释放连接池中的资源
    delete _connPool; // 释放单例对象
}
