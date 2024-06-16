#pragma once
#include "DivingState.h"
#include "JumpingState.h"
#include "StandingState.h"

class HeroineState;

class Heroine
{
public:
    static StandingState standing;
    static JumpingState jumping;
    static DivingState diving;
    
    void handleInput(char input);
    void update();
    void setState(HeroineState* newState);
    void superBomb();
    void setGraphics(const char* image);
private:
    HeroineState* state_;
};
