#include "Heroine.h"
#include <iostream>
#include <ostream>

#include "HeroineState.h"

StandingState Heroine::standing;
DivingState Heroine::diving;
JumpingState Heroine::jumping;

void Heroine::handleInput(char input)
{
    HeroineState* state = state_->handleInput(*this, input);
    if(state)
    {
        // delete state_;
        state_ = state;
    }
}

void Heroine::update()
{
    state_->update(*this);
}

void Heroine::setState(HeroineState* newState)
{
    state_ = newState;
}

void Heroine::superBomb()
{
    std::cout << "Super Bomb Attack" << std::endl;
}

void Heroine::setGraphics(const char* image)
{
    std::cout << "Image changed to: " << image << std::endl;
}
