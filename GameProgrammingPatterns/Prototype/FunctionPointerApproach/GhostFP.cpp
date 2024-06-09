#include "GhostFP.h"

MonsterFP* GhostFP::spawnGhost() const
{
    return new GhostFP;
}
