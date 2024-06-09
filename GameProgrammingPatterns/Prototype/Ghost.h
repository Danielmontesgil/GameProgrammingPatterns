#pragma once
#include "Monster.h"

class Ghost : public Monster
{
public:
    Ghost(int health, int speed) : health_(health), speed_(speed) {}
    Monster* clone() override;

private:
    int health_;
    int speed_;
};
