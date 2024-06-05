#pragma once
#include "Terrain.h"

class World
{
public:
    World()
    : grassTerrain_(1, false, "GRASS_TEXTURE"),
      hillTerrain_(3, false, "HILL_TEXTURE"),
      riverTerrain_(2, true, "RIVER_TEXTURE")
    {}

    void generateTerrain();

    const Terrain& getTile(int x, int y) const;

    int random(int maxValue);
    
private:
    Terrain* tiles_[90][90];

    Terrain grassTerrain_;
    Terrain hillTerrain_;
    Terrain riverTerrain_;

    const int WIDTH = 90;
    const int HEIGHT = 90;
};
