#pragma once
#include "Command.h"
#include "GameActor.h"

class FireCommand : public Command
{
public:
    void execute(GameActor& actor) override { actor.fire_gun(); }
};
