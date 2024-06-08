#pragma once
#include <iostream>

class Observer;

class Subject
{
public:
    void addObserver(Observer* observer);

    void removeObserver(const Observer* observer);

protected:
    void notify(std::string event);
    
private:
    Observer* observer_[20] = {nullptr};
    int numObservers_ = 0;
};
