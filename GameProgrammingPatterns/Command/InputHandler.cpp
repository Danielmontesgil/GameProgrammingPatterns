#include "InputHandler.h"
#include <iostream>
#include "Command.h"
#include "MoveUnitCommand.h"

CommandStrategy* InputHandler::handleInput(GameActor& actor, char input)
{
    // Here we need a way to get the selected Unit, for the sake of this example I will pass the Unit as a param
    int destY;
    int destX;
    switch (input)
    {
    case 'w':
        destY = actor.y() - 1;
        return new MoveUnitCommand(&actor, actor.x(), destY);

    case 's':
        destY = actor.y() + 1;
        return new MoveUnitCommand(&actor, actor.x(), destY);

    case 'a':
        destX = actor.x() - 1;
        return new MoveUnitCommand(&actor, destX, actor.y());

    case 'd':
        destX = actor.x() + 1;
        return new MoveUnitCommand(&actor, destX, actor.y());
        
    default:
        return nullptr;
    }
}

Command* InputHandler::handleInput(char input)
{
    if(input == 'a')
    {
        return buttonX_;
    }
    
    if(input == 'b')
    {
        return buttonY_;
    }

    return nullptr;
}

void InputHandler::SetCommand(Command* command, int buttonId)
{
    switch (buttonId)
    {
    case 1:
        buttonX_ = command;
        break;
    case 2:
        buttonY_ = command;
        break;
    default:
        std::cout << "Command Id not found" << std::endl;
    }
}

