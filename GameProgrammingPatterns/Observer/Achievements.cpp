#include "Achievements.h"
#include <iostream>

void Achievements::onNotify(std::string event)
{
    if(event == "Win")
    {
        unlock("WIN_ACHIEVEMENT");
        return;
    }
    
    std::cout << "That event type does not exist" << std::endl;
    
}

void Achievements::unlock(std::string achievement)
{
    std::cout << achievement << " unlocked" << std::endl;
}

