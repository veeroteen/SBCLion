cmake_minimum_required(VERSION 3.22)
project(SBCLion)
set(CMAKE_CXX_STANDARD 14)

set(BUILD_CPR_TESTS OFF)
set(CMAKE_USE_OPENSSL OFF)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(CMAKE_CXX_STANDARD 14)

include_directories(SBCLion)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG 6ea2dec23c3df14ac3b27b7d2d6bbff0cb7ba1b0)
FetchContent_MakeAvailable(cpr)

add_executable(SBCLion main.cpp Tasks.h Task1.cpp Task2.cpp Task3.cpp)
target_link_libraries(SBCLion PRIVATE cpr::cpr)
cmake_minimum_required(VERSION 3.22)





