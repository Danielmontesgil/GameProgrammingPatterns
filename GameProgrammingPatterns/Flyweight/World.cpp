#include "World.h"
#include <random>

void World::generateTerrain()
{
    // Fill the ground with grass.
    for (int x = 0; x < WIDTH; x++)
    {
        for (int y = 0; y < HEIGHT; y++)
        {
            // Sprinkle some hills.
            if (random(10) == 0)
            {
                tiles_[x][y] = &hillTerrain_;
            }
            else
            {
                tiles_[x][y] = &grassTerrain_;
            }
        }
    }

    // Lay a river.
    int x = random(WIDTH);
    for (int y = 0; y < HEIGHT; y++) {
        tiles_[x][y] = &riverTerrain_;
    }
}

const Terrain& World::getTile(int x, int y) const
{
    return *tiles_[x][y];
}

// Function to generate a random number within a range [0, maxValue)
int World::random(int maxValue) {
    static std::random_device rd; // Seed for the random number engine
    static std::mt19937 gen(rd()); // Standard Mersenne Twister engine seeded with rd()
    std::uniform_int_distribution<> distrib(0, maxValue - 1);
    return distrib(gen);
}