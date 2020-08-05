# cmake_minimum_required(VERSION <specify CMake version here>)
project(cmake-study)

set(CMAKE_CXX_STANDARD 14)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# add the executable
# 添加一个可执行文件
# 指定生成目标
add_executable(Demo ${DIR_SRCS})
