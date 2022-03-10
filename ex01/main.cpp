#include "Zombie.hpp"

int main() {

    Zombie *instance;

    instance = instance->zombieHorde(5, "Zombie1");

    for (int i = 0; i < 5; i++)
         instance[i].announce();
    delete []instance;
}