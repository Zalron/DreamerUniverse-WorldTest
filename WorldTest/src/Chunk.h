#pragma once

#include "flecs.h"

struct Chunk
{
public:
    Chunk(flecs::world& world)
    {
        world.module<Chunk>();
    }
};

