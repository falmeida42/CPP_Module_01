#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    Weapon  instance;
    HumanA  putin("Putin");
    HumanB  biden("Biden");

    instance.setType("AK-47");
    putin.weapon.setType("AK-47");
    biden.weapon.setType("Knife");

    std::cout << "Type of weapon: " << instance.getType() << std::endl;
    putin.attack();
    biden.attack();

}