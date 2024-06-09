#include "Demon.h"

Monster* Demon::clone()
{
    return new Demon(health_, speed_);
}
