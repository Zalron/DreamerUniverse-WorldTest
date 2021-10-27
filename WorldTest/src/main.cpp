#include <iostream>
#include "flecs.h"
#include "flecs_os_api_stdcpp.h"

using namespace std;

int main()
{
    stdcpp_set_os_api();

    flecs::world world;

    int32_t threadcount;

    cout << "Type the amount of threads you want" << std::endl;

    cin >> threadcount;

    if (threadcount == 0)
    {
        threadcount = 12;
    }

    world.set_threads(threadcount);

    world.set_target_fps(60);

    while(world.progress());
}
