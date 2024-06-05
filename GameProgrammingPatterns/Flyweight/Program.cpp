#include <iostream>
#include <string>
#include "World.h"

int main(int argc, char* argv[])
{
    World world = World();
    world.generateTerrain();

    int cost = world.getTile(5,80).getMovementCost();
    bool isWater = world.getTile(5,80).isWater();
    std::string texture = world.getTile(5,80).getTexture();

    std::cout << "Cost: " << cost << ", isWater: " << isWater << ", texture: " << texture << "." << std::endl;
    
    return 0;
}
