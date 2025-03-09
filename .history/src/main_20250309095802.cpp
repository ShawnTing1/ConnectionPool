#include "pch.h"
#include "Connection.h"
#include "CommonConnectionPool.h"

#include <iostream>
#include <mysql/mysql.h>

using namespace std;


int main()
{

    clock_t begin = clock();
    

    // thread t1([]() {
    //     for (int i = 0; i < 250; ++i) {
    //         ConnectionPool* cp = ConnectionPool::GetInstance();
    //         shared_ptr<Connection> sp = cp->getConnection();
    //         char sql[1024] = {0};
    //         sprintf(sql, "INSERT INTO user (name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
    //         sp->update(sql);
    //     }
    // });

    // thread t2([]() {
    //     for (int i = 0; i < 250; ++i) {
    //         ConnectionPool* cp = ConnectionPool::GetInstance();
    //         shared_ptr<Connection> sp = cp->getConnection();
    //         char sql[1024] = {0};
    //         sprintf(sql, "INSERT INTO user (name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
    //         sp->update(sql);
    //     }
    // });

    // thread t3([]() {
    //     for (int i = 0; i < 250; ++i) {
    //         ConnectionPool* cp = ConnectionPool::GetInstance();
    //         shared_ptr<Connection> sp = cp->getConnection();
    //         char sql[1024] = {0};
    //         sprintf(sql, "INSERT INTO user (name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
    //         sp->update(sql);
    //     }
    // });

    // thread t4([]() {
    //     for (int i = 0; i < 250; ++i) {
    //         ConnectionPool* cp = ConnectionPool::GetInstance();
    //         shared_ptr<Connection> sp = cp->getConnection();
    //         char sql[1024] = {0};
    //         sprintf(sql, "INSERT INTO user (name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
    //         sp->update(sql);
    //     }
    // });


    // t1.join();
    // t2.join();
    // t3.join();
    // t4.join();

    for (int i = 0; i < 4000; ++i) {
        // Connection conn;
        // char sql[1024] = {0};
        // sprintf(sql, "INSERT INTO user(name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
        // conn.connect("127.0.0.1", 3306, "root", "12345678", "ConnectionPool");
        // conn.update(sql);
        
        ConnectionPool* cp = ConnectionPool::GetInstance();
        shared_ptr<Connection> sp = cp->getConnection();
        char sql[1024] = {0};
        sprintf(sql, "INSERT INTO user(name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
        sp->update(sql);
    }

    clock_t end = clock();
    cout << "time: " << end - begin << "ms" << endl;

#if 0
    for (int i = 0; i < 1000; ++i) {
        // Connection conn;
        // char sql[1024] = {0};
        // sprintf(sql, "INSERT INTO user(name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
        // conn.connect("127.0.0.1", 3306, "root", "12345678", "ConnectionPool");
        // conn.update(sql);
        
        ConnectionPool* cp = ConnectionPool::GetInstance();
        shared_ptr<Connection> sp = cp->getConnection();
        char sql[1024] = {0};
        sprintf(sql, "INSERT INTO user(name, age, sex) VALUES('%s', '%d', '%s')", "zhangsan", 20, "male");
        sp->update(sql);
    }
#endif

    return 0;
}