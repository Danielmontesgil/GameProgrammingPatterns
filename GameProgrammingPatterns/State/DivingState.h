#pragma once
#include "HeroineState.h"

class Heroine;

class DivingState : public HeroineState
{
public:
    ~DivingState() override;
    HeroineState* handleInput(Heroine& heroine, char input) override;
};
