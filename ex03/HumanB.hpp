#ifndef HUMANB_H
#define HUMANB_H

# include "Weapon.hpp"

class   HumanB {
    private:
        std::string name;

    public:

        Weapon  weapon;
        void    attack(void);
        void    setWeapon(Weapon weapon);
        HumanB(std::string name);
};

#endif