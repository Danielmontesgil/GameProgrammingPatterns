
#include <iostream>

#include "Heroine.h"

int main(int argc, char* argv[])
{
    Heroine heroine = Heroine();
    heroine.setState(&Heroine::standing);
    char input;
    while (true)
    {
        std::cout << "b to jump, d to down, s to stand up, e to exit" << std::endl;
        std::cin >> input;

        if(input != 'e')
        {
            heroine.handleInput(input);
            continue;
        }
        break;
    }
    
    return 0;
}
