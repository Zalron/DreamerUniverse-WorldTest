#pragma once

#include "flecs.h"

struct RegionComponents
{
    const uint8_t NumberOfChunksInARegion = 32;

    struct RegionPosition
    {
        uint32_t xPosition;
        uint32_t yPosition;
        uint32_t zPosition;
    };

    struct RegionState
    {

    };

    RegionComponents(flecs::world& world)
    {
        world.module<RegionComponents>();
    }
};
