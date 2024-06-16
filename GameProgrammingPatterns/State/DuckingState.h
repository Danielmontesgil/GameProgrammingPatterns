#pragma once
#include "HeroineState.h"

class Heroine;

class DuckingState : public HeroineState
{
public:
    ~DuckingState() override;
    DuckingState() : chargeTime_(0){}
    HeroineState* handleInput(Heroine& heroine, char input) override;
    void update(Heroine& heroine) override;

private:
    int chargeTime_;
};
