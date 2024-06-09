#include "Spawner.h"

#include "Monster.h"

Monster* Spawner::spawnMonster() const
{
    return prototype_->clone();
}
