#include "JumpingState.h"
#include <iostream>
#include "Heroine.h"

JumpingState::~JumpingState()
{
}

HeroineState* JumpingState::handleInput(Heroine& heroine, char input)
{
    if(input == 'd')
    {
        heroine.setState(&Heroine::diving);
        std::cout << "From Jumping to Diving" << std::endl;
    }

    return nullptr;
}
