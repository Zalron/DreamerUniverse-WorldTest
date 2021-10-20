#pragma once

#include "flecs.h"

struct ChunkComponent
{
public:
    const uint8_t NumberOfVoxelsInAChunk = 32;

    struct ChunkPosition
    {
        uint64_t xPosition;
        uint64_t yPosition;
        uint64_t zPosition;
    };

    struct ChunkCreationState
    {

    };

    struct ChunkState
    {

    };

    struct ChunkInfo
    {

    };


    ChunkComponent(flecs::world& world)
    {
        world.module<ChunkComponent>();
    }

};
