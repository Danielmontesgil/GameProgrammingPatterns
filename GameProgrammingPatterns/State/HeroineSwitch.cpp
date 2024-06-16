#include "HeroineSwitch.h"
#include <iostream>

void HeroineSwitch::handleInput(char input)
{
    switch (state_)
    {
    case STATE_STANDING:
        if(input == 'b')
        {
            state_ = STATE_JUMPING;
            // yVelocity = JUMP_VELOCITY;
            // setGraphics(IMAGE_JUMP);
        }
        else
        {
            if(input == 'd')
            {
                state_ = STATE_DUCKING;
                // setGraphics(IMAGE_DUCK);
            }
        }
        break;
    case STATE_JUMPING:
        if(input == 'd')
        {
            state_ = STATE_DIVING;
            // setGraphics(IMAGE_DIVE);
        }
        break;
    case STATE_DUCKING:
        if(input == 'u')
        {
            state_ = STATE_STANDING;
            // setGraphics(IMAGE_STAND);
        }
        break;
    default:
        std::cout << "This is not a valid input" << std::endl;
    }
}
