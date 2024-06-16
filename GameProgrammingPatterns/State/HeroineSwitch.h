#pragma once

enum State
{
    STATE_STANDING,
    STATE_JUMPING,
    STATE_DUCKING,
    STATE_DIVING
};

class HeroineSwitch
{
public:
    void handleInput(char input);

private:
    State state_;
};
