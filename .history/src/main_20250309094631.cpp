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

    clock_t begin = clock();
    Connection conn;
    for (int i = 0; i < 5; ++i) {
        char sql[1024] = {0};
        sprintf(sql, "INSERT INTO user(name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
        conn.connect("127.0.0.1", 3306, "root", "12345678", "ConnectionPool");
        conn.update(sql);
    }
    clock_t end = clock();
    cout << "time: " << end - begin << "ms" << endl;

    return 0;
}