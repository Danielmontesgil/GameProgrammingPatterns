#pragma once
#include "Monster.h"

class Demon : public Monster
{
public:
    Demon(int health, int speed) : health_(health), speed_(speed) {}
    Monster* clone() override;
    
private:
    int health_;
    int speed_;
};
