#pragma once

class Monster;

class Spawner
{
public:
    Spawner(Monster* prototype) : prototype_(prototype) {}
    Monster* spawnMonster() const;

private:
    Monster* prototype_;
};
