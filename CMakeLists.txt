cmake_minimum_required(VERSION 3.12)
project(gravitySphere)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

add_executable(gravitySphere main.cpp ./src/Sphere.cpp ./include/Sphere.h
    ./src/LinSpace1D.cpp ./include/LinSpace1D.h
    ./src/Anomaly1D.cpp ./include/Anomaly1D.h)
