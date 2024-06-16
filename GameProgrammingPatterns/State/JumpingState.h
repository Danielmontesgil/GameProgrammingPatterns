#pragma once
#include "HeroineState.h"

class Heroine;

class JumpingState : public HeroineState
{
public:
    ~JumpingState() override;
    HeroineState* handleInput(Heroine& heroine, char input) override;
};
