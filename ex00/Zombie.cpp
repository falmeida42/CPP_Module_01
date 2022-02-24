#include "Zombie.h"

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
}

void Zombie::setZombieName(const std::string name) {
    this->name = name;
}