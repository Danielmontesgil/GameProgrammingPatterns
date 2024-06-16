#include "DivingState.h"
#include <iostream>
#include "Heroine.h"

DivingState::~DivingState()
{
}

HeroineState* DivingState::handleInput(Heroine& heroine, char input)
{
    if(input == 's')
    {
        heroine.setState(&Heroine::standing);
        std::cout << "From Diving to Standing" << std::endl;
    }

    return nullptr;
}
