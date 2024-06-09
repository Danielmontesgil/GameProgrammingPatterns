#pragma once

class Monster
{
public:
    virtual ~Monster();
    virtual Monster* clone() = 0;
};
