#pragma once
#include "Command.h"
#include "GameActor.h"

class JumpCommand : public Command
{
public:
    void execute(GameActor& actor) override { actor.jump(); }
};
