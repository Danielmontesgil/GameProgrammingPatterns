#pragma once
#include <string>

class Observer
{
public:
    virtual ~Observer();
    virtual void onNotify(std::string Event) = 0;
};

inline Observer::~Observer()
{
}
