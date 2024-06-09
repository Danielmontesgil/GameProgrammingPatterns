#include "SpawnerT.h"

template <class T>
Monster* SpawnerFor<T>::spawnMonster()
{
    return new T();
}