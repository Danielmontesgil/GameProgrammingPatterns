#include "StandingState.h"
#include <iostream>
#include "DuckingState.h"
#include "Heroine.h"

StandingState::~StandingState()
{
}

HeroineState* StandingState::handleInput(Heroine& heroine, char input)
{
    if(input == 'b')
    {
        heroine.setState(&Heroine::jumping);
        std::cout << "From Standing to Jumping" << std::endl;
    }
    if(input == 'd')
    {
        // Esta es una forma de manejar cada estado como una instancia, el Heroine se debe liberar la memeria que se crea
        // aquí
        std::cout << "From Standing to Ducking" << std::endl;
        return new DuckingState();
    }

    return nullptr;
}
