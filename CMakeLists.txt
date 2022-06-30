cmake_minimum_required(VERSION 3.22)
project(SBCLion)
set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")
include(FetchContent)
include_directories(SBCLion)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.10.5/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(SBCLion main.cpp Film.h Fill.cpp)

target_link_libraries(SBCLion PRIVATE nlohmann_json::nlohmann_json)



