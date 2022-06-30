cmake_minimum_required(VERSION 3.22)
project(SBCLion)
set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

include_directories(SBCLion)

add_subdirectory(nlohmann_json)

add_executable(SBCLion main.cpp Film.h Fill.cpp)

target_link_libraries(SBCLion PRIVATE nlohmann_json::nlohmann_json)



