#pragma once

class GameActor;

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute(GameActor& actor) = 0;
};
