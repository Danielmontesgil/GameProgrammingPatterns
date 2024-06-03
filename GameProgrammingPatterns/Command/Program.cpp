#include <iostream>
#include "FireCommand.h"
#include "InputHandler.h"
#include "JumpCommand.h"
#include "CommandStrategy.h"

int main(int argc, char* argv[])
{
    InputHandler input_handler = InputHandler();
    GameActor game_actor = GameActor(0,0);
    JumpCommand jump_command = JumpCommand();
    FireCommand fire_command = FireCommand();
    CommandStrategy* command_strategy = nullptr;
    char game_input;
    char input;

    input_handler.SetCommand(&jump_command, 1);
    input_handler.SetCommand(&fire_command, 2);

    std::cout << "For Shooter enter s, for Strategy enter t" << std::endl;
    std::cin >> game_input;
    
    do
    {
        if(game_input == 's')
        {
            std::cout << std::endl;
            std::cout << "Enter your action" << std::endl;
            std::cout << "'a' to jump, 'b' to fire" << std::endl;
            std::cin >> input;
        
            Command*  command = input_handler.handleInput(input);

            if(command)
            {
                command->execute(game_actor);
                continue;
            }
        }
        else if(game_input == 't')
        {
            std::cout << std::endl;
            std::cout << "Enter your action" << std::endl;
            std::cout << "'w' to Move Up, 's' to Move Down, 'a' to move Left, 'd' to Move Right, 'u' to Undo" << std::endl;
            std::cin >> input;

            if(input == 'u')
            {
                if(command_strategy)
                {
                    command_strategy->undo();
                    continue;
                }

                std::cout << "No Move to Undo" << std::endl;
                continue;
            }
        
            command_strategy = input_handler.handleInput(game_actor, input);

            if(command_strategy)
            {
                command_strategy->execute();
                continue;
            }
        }

        break;
    }
    while (true);

    return 0;
}
