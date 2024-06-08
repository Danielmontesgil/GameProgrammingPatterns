#include "Subject.h"
#include "Observer.h"

void Subject::addObserver(Observer* observer)
{
    if(numObservers_ < 20)
    {
        observer_[numObservers_] = observer;
        numObservers_++;
    }
    else
    {
        std::cout << "Reached max of observers" << std::endl;
    }
}

void Subject::removeObserver(const Observer* observer)
{
    for(int i = 0; i < numObservers_; i++)
    {
        if(observer_[i] == observer)
        {
            observer_[i] = nullptr;
        }
    }
}

void Subject::notify(std::string event)
{
    for (const auto observer : observer_)
    {
        if(observer)
        {
            observer->onNotify(event);
        }
    }
}


