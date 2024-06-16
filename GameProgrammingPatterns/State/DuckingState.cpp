#include "DuckingState.h"
#include <iostream>
#include "Heroine.h"
#include "StandingState.h"

DuckingState::~DuckingState()
{
}

HeroineState* DuckingState::handleInput(Heroine& heroine, char input)
{
    if (input == 's')
    {
        heroine.setState(&Heroine::standing);
        heroine.setGraphics("IMAGE_STAND");
        std::cout << "From Ducking to Standing" << std::endl;
    }

    return nullptr;
}

void DuckingState::update(Heroine& heroine) {
    chargeTime_++;
    if (chargeTime_ > 10)
    {
        heroine.superBomb();
    }
}
