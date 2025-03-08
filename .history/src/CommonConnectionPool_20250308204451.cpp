#include "pch.h"
#include "CommonConnectionPool.h"

// 提前创建单例实例（饿汉模式），程序启动时即初始化，线程安全
ConnectionPool* ConnectionPool::_connPool = new ConnectionPool();

// 获取线程池对象
ConnectionPool* ConnectionPool::GetInstance()
{
    return _connPool;
}

bool ConnectionPool::loadConfigFile()
{
    FILE* pf = fopen("mysql.ini", "r");
    if (pf == nullptr)
    {
        LOG("mysql.ini file not exist");
        return false;
    }

    while (!feof(pf)) {
        char line[1024] = {0};
        fgets(line, 1024, pf);
        string str = line;
        int idx = str.find("=");
        if (idx == -1) /
        {
            continue;
        }
    }
}