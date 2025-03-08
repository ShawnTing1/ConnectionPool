#include <mysql/mysql.h>
#include <string>
using namespace std;
/*
实现MySQL数据库得增删改查操作
*/

class Connection
{
public:
    // 初始化数据库连接
    Connection();
    // 释放数据库连接资源
    ~Connection();
    // 连接数据库
    bool connect(string ip, unsigned short port, string user, string password, string dbname);
    // 更新操作
    bool update(string sql);
    // 查询操作
    MYSQL_RES* query(string sql);
private:
    MYSQL* _conn;
};