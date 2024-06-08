#pragma once
#include "Subject.h"

class Physics : public Subject
{
public:
    void updateEntity(std::string action);
};
