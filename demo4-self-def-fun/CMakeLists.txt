# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.16)

# 项目信息
project(cmake-study)

set(CMAKE_CXX_STANDARD 14)

#设置工程包含当前目录,此处必须，不然找不到congig.h.in
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 是否使用自己的 MathFunctions 库
option (USE_MYMATH
        "Use provided math implementation" ON)

# 加入一个配置头文件，用于处理 CMake 对源码的设置
configure_file (
        "${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_BINARY_DIR}/config.h"
)

# 是否加入 MathFunctions 库
if (USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory (math)#添加math子目录
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunction)
endif (USE_MYMATH)

# aux_source_directory(< dir > < variable >)查找目录下的所有源文件，并将名称保存到变量
# .代表源文件夹，注意空格后接DIR_SRCS保存的变量名字
aux_source_directory(. DIR_SRCS)

# 添加一个可执行文件
# 指定生成目标
add_executable(cmake-study ${DIR_SRCS})

#添加链接库target_link_libraries(重点)
target_link_libraries(cmake-study MathFunction)