Cmake_minimum_required(VERSION 3.10)
project(CPPM7_11_3)
add_library(LeaverLibraryDynamic SHARED Leaver.h Leaver.cpp)
add_executable(CPPM7_11_3 CPPM7_11_3.cpp)
target_link_libraries(CPPM7_11_3 LeaverLibraryDynamic)

