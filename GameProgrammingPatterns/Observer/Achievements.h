#pragma once
#include "Observer.h"

class Achievements : public Observer
{
public:
    void onNotify(std::string event) override;

private:
    void unlock(std::string achievement);
};
