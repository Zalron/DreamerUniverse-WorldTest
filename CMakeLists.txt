cmake_minimum_required(VERSION 3.20)
project(WorldTest)

set(CMAKE_CXX_STANDARD 14)

include_directories(WorldTest/include)
include_directories(WorldTest/src)

add_executable(WorldTest
        WorldTest/src/main.cpp
        WorldTest/src/Chunk.cpp
        WorldTest/src/Chunk.h
        WorldTest/include/flecs.c
        WorldTest/include/flecs.h WorldTest/src/ChunkComponent.h WorldTest/src/VoxelComponents.h WorldTest/src/RegionComponents.h)
