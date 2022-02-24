#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"

class   HumanA {
    private:
        std::string name;

    public:

        Weapon  weapon;
        void    attack(void);
        HumanA(std::string name, Weapon weapon);
};

#endif