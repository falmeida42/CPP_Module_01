#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        std::string getName(void);
        void    setName(std::string name);
        void    announce(void);
        

        Zombie();
        ~Zombie();
};

Zombie  *zombieHorde(int N, std::string name);

#endif