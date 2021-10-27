cmake_minimum_required(VERSION 3.20)
project(WorldTest)

set(CMAKE_CXX_STANDARD 14)

include_directories(WorldTest/include)
include_directories(WorldTest/src)

add_executable(WorldTest
        WorldTest/include/flecs.c
        WorldTest/include/flecs.h
        WorldTest/include/flecs_os_api_stdcpp.cpp
        WorldTest/include/flecs_os_api_stdcpp.h
        WorldTest/src/main.cpp
        WorldTest/src/RegionCreation.cpp
        WorldTest/src/RegionCreation.h
        WorldTest/src/ChunkComponents.h
        WorldTest/src/VoxelComponents.h
        WorldTest/src/RegionComponents.h
        WorldTest/src/ChunkCreation.cpp
        WorldTest/src/ChunkCreation.h
        WorldTest/src/BioneCreation.cpp
        WorldTest/src/BioneCreation.h
        WorldTest/src/BioneComponents.h)
