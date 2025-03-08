/*
实现连接池功能模块
*/

class ConnectionPool
{
public:
    // 获取线程池对象
    static ConnectionPool* GetInstance(); //获取连接池对象, static静态函数, 通过类名直接调用
private:
    ConnectionPool() {}; //单例模式, 构造函数私有化, 饿汉模式，天然线程安全
    static ConnectionPool* _connPool; //饿汉模式，天然线程安全};
};