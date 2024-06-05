#pragma once
#include <string>

class Terrain
{
public:
    Terrain(int movementCost, bool isWater, std::string texture)
    : movementCost_(movementCost),
    isWater_(isWater),
    texture_(std::move(texture))
    {}

    int getMovementCost() const { return movementCost_; }
    bool isWater() const { return isWater_; }
    std::string getTexture() const { return texture_; }

private:
    int movementCost_;
    bool isWater_;
    std::string texture_;
};
