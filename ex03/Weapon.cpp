#include "Weapon.hpp"

const std::string   Weapon::getType(void) {
    return (this->type);
}

void    Weapon::setType(const std::string newType) {
    this->type = newType;
}

Weapon::Weapon(std::string  weapon): type(weapon) {
}

Weapon::Weapon() {  
    this->type = "Empty";
}