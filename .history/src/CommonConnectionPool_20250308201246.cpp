#include "pch.h"
#include "CommonConnectionPool.h"

// 获取线程池对象
static ConnectionPool* ConnectionPool::GetInstance()
{
    return _connPool
}