# 将当前目录下的所有源文件定义到SRC_LIST中
aux_source_directory(. SRC_LIST)


#指定生成可执行文件
add_executable(ConnectionPool ${SRC_LIST})
# 指定可执行文件链接需要依赖的库文件
target_link_libraries(ConnectionPool mysqlclient pthread) 