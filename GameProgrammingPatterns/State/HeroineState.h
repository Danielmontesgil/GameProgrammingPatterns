#pragma once

class Heroine;

class HeroineState
{
public:
    virtual ~HeroineState();
    virtual HeroineState* handleInput(Heroine& heroine, char input) {return nullptr;}
    virtual void update(Heroine& heroine){}
};
