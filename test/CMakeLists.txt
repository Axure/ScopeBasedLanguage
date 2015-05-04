cmake_minimum_required(VERSION 3.1)
project(ScopeBasedLanguage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
set(INCLUDE_FILES ../Function.h ../Function.cpp)
add_executable(FunctionTest ${SOURCE_FILES} ${INCLUDE_FILES})