cmake_minimum_required(VERSION 3.16)
project(Hello)
SET(SRC_LIST c/hello.c)
add_executable(${PROJECT_NAME} ${SRC_LIST})