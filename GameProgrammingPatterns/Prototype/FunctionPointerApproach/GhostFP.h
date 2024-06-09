#pragma once
#include "MonsterFP.h"

class GhostFP : public MonsterFP
{
public:
    MonsterFP* spawnGhost() const;
};
