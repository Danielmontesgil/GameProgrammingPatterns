#include "Ghost.h"

Monster* Ghost::clone()
{
    return new Ghost(health_, speed_);
}
