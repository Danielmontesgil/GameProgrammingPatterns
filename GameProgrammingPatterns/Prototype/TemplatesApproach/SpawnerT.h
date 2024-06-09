#pragma once

class Monster;

class SpawnerT
{
public:
    virtual ~SpawnerT();
    virtual Monster* spawnMonster() = 0;
};

template <class T>
class SpawnerFor<T> : public SpawnerT
{
public:
    virtual Monster* spawnMonster() override;
};
