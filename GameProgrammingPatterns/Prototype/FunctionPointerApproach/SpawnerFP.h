#pragma once

class MonsterFP;

typedef MonsterFP* (*SpawnCallback)();

class SpawnerFP
{
public:
    SpawnerFP(SpawnCallback spawn) : spawn_(spawn) {}
    MonsterFP* spawnMonster();

private:
    SpawnCallback spawn_;
};
