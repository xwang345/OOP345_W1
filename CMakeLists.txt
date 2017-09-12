cmake_minimum_required(VERSION 3.7)
project(w1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES CString.cpp
        CString.h
        process.cpp
        process.h
        w1.cpp)
add_executable(w1 ${SOURCE_FILES})