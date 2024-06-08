// Para evitar aignaciones de memoria, ya que el array debe ser dinámico, se puede crear una observer que sea una
// linked list en la que cada observer sabe quien es el siguiente, tambén se puede usar una double linked list

#include "Achievements.h"
#include "Physics.h"

int main(int argc, char* argv[])
{
    const auto achievements = new Achievements();
    auto physics = Physics();
    physics.addObserver(achievements);
    std::string action;

    std::cout << "Enter you action: " << std::endl;
    std::cin >> action;

    physics.updateEntity(action);

    physics.removeObserver(achievements);

    physics.updateEntity(action);
    
    return 0;
}
