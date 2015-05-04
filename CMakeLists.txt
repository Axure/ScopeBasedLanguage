cmake_minimum_required(VERSION 3.1)
project(ScopeBasedLanguage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ScopeBasedLanguage ${SOURCE_FILES} Paragraph.cpp Paragraph.h Sentence.cpp Sentence.h Token.cpp Token.h Scope.cpp Scope.h)