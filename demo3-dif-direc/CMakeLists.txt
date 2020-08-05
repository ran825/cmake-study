# cmake_minimum_required(VERSION <specify CMake version here>)
project(cmake-study)

set(CMAKE_CXX_STANDARD 14)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
#添加math子目录
add_subdirectory(math)

# add the executable
# 添加一个可执行文件
# 指定生成目标
add_executable(cmake-study ${DIR_SRCS})

#添加链接库
target_link_directories(cmake-study MathFunction)