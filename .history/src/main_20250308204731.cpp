#include "pch.h"
#include "Connection.h"
#include "CommonConnectionPool.h"

#include <iostream>
#include <mysql/mysql.h>

using namespace std;


int main()
{
    // Connection conn;
    // char sql[1024] = {0};
    // sprintf(sql, "INSERT INTO user (name, age, sex) VALUES ('%s', '%d', '%s')", "zhangsan", 20, "male");
    // conn.connect("127.0.0.1", 3306, "root", "12345678", "ConnectionPool");
    // conn.update(sql);

    ConnectionPool* cp = ConnectionPool::GetInstance();
    cp->loadConfigFile();

    return 0;
}