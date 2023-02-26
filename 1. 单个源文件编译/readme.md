# _单个源文件_

## CMakeLists.txt介绍

CMakeLists.txt 语法比较简单，由命令、注释和空格组成，其中命令是不区分大小写的。符号 # 后面的内容被认为是注释。命令由命令名称、小括号和参数组成，参数之间使用空格进行间隔。

## 工程结构

```
./demo1
    main.c
```

## 示例说明

```
# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.5)

# 项目信息
project(demo1)

# 指定生成目标
add_executable(demo main.c)
```

`cmake_minimum_required` 指定运行此配置文件所需的 CMake 的最低版本

`project` 参数值是 demo1，该命令表示项目的名称是 demo1

`add_executable` 将名为 main.c 的源文件编译成一个名称为 demo 的可执行文件

## 编译步骤

1. 在当前目录执行 `cmake .` 得到 Makefile
2. 在当前目录执行 `make` 编译得到demo可执行程序

## 实测结果

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
[ 50%] Building C object CMakeFiles/demo.dir/main.c.o
[100%] Linking C executable demo
[100%] Built target demo
```
