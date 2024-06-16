#pragma once
#include "HeroineState.h"

class Heroine;

class StandingState : public HeroineState
{
public:
    ~StandingState() override;
    HeroineState* handleInput(Heroine& heroine, char input) override;
};
