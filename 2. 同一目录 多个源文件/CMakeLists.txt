# CMake 最低版本要求
cmake_minimum_required(VERSION 3.5)

# 项目信息
project(demo2)

# 查找当前目录下的所有源文件，并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

#指定生成目标
# 最直接的方式：将每个.c源文件都写进add_executable命令中
# add_executable(demo main.c math_function.c)

# 高级做法：CMake 会将当前目录所有源文件的文件名赋值给变量 DIR_SRCS
# 再指示变量 DIR_SRCS 中的源文件需要编译成一个名称为 demo 的可执行文件
add_executable(demo ${DIR_SRCS})
