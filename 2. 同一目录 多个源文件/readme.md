# _同一目录 多个源文件_

## 工程结构

```
./demo2
    main.c
    math_function.c
    matn_function.h
```

## 最直接的CMake

*存在的问题：如果源文件很多，把所有源文件的名字都加进去将是一件烦人的工作*

```
# CMake 最低版本要求
cmake_minimum_required(VERSION 3.5)

# 项目信息
project(demo2)

# 查找当前目录下的所有源文件，并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

#指定生成目标
# 最直接的方式：将每个.c源文件都写进add_executable命令中
# add_executable(demo main.c math_function.c)
```

## 高级CMake

*自动查找指定目录下的所有源文件*

```
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
```

## 执行结果

```
ding@linux:~/cmake_test$ cmake .
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/ding/cmake_test
ding@linux:~/cmake_test$ make
Scanning dependencies of target demo
[ 33%] Building C object CMakeFiles/demo.dir/main.c.o
[ 66%] Building C object CMakeFiles/demo.dir/math_function.c.o
[100%] Linking C executable demo
[100%] Built target demo
```
