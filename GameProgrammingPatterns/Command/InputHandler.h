#pragma once

class CommandStrategy;
class GameActor;
class Command;

class InputHandler
{
public:
    Command* handleInput(char input);
    CommandStrategy* handleInput(GameActor& actor, char input);

    void SetCommand(Command* command, int buttonId);

private:
    Command* buttonX_;
    Command* buttonY_;
};
