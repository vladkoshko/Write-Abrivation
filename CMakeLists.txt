cmake_minimum_required(VERSION 3.5)

project (abreviations)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -O3")

file(GLOB
         CPPS "src/*.cpp")

add_executable(${PROJECT_NAME} ${CPPS})
