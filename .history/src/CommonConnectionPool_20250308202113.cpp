#include "pch.h"
#include "CommonConnectionPool.h"

// 获取线程池对象
ConnectionPool *ConnectionPool::GetInstance()
{
    return _connPool;
}