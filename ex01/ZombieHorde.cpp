#include "Zombie.hpp"

void    Zombie::setName(std::string name) {
    this->name = name;
}

Zombie*  Zombie::zombieHorde(int N, std::string name) {

    Zombie *instance;
    
    instance = new Zombie[N];
    for (int i = 0; i <= N; i++)
        instance[i].setName(name);

    return (instance);
}