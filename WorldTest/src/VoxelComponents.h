#pragma once

#include "flecs.h"

struct VoxelComponents
{
    struct VoxelPosition
    {
        uint_8 xPosition;
        uint_8 yPosition;
        uint_8 zPosition;
    };

    struct VoxelType
    {

    };

    VoxelComponents(flecs::world& world)
    {
        world.module<VoxelComponents>();
    }
};
