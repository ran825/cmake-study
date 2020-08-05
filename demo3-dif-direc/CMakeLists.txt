cmake_minimum_required(VERSION 3.16)

# cmake_minimum_required(VERSION <specify CMake version here>)
project(cmake-study)

set(CMAKE_CXX_STANDARD 14)

# aux_source_directory(< dir > < variable >)查找目录下的所有源文件，并将名称保存到变量
# .代表源文件夹，注意空格后接DIR_SRCS保存的变量名字
aux_source_directory(. DIR_SRCS)
#添加math子目录
add_subdirectory(math)

# add the executable
# 添加一个可执行文件
# 指定生成目标
add_executable(cmake-study ${DIR_SRCS})

#添加链接库target_link_libraries(重点)
target_link_libraries(cmake-study MathFunction)