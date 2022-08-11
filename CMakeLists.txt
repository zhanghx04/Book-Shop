cmake_minimum_required(VERSION 3.15)

project(book_shop)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(book_shop bookshop.cpp Book.cpp)