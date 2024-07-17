cmake_minimum_required(VERSION 3.10)
project(MatrixProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)

add_executable(matrixapp exe/main.cpp)
target_include_directories(matrixapp PUBLIC lib)
target_link_libraries(matrixapp matrixlib)
