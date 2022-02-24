#include "Zombie.hpp"

int main() {

    Zombie instance("alguem");
    Zombie *instance2;

    instance.announce();
    instance.randomChump("Carlos");

    instance2 = instance2->newZombie("oassad");

    instance2->announce();
    delete instance2;
}