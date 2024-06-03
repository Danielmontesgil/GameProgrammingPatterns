#include "GameActor.h"
#include <iostream>

void GameActor::jump()
{
    std::cout << "You jumped" << std::endl;
}

void GameActor::fire_gun()
{
    std::cout << "You fired the gun" << std::endl;
}

void GameActor::moveTo(int x, int y)
{
    x_ = x;
    y_ = y;
    std::cout << "New position " << x << ", " << y << std::endl;
}


