#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        std::string getName(void);
        void    setName(std::string name);
        void    announce(void);
        Zombie  *zombieHorde(int N, std::string name);

        Zombie();
        ~Zombie();
};


#endif