#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    void announce( void );
    void setZombieName(const std::string name);
    ~Zombie();
};

// Zombie::Zombie()
// {
// }

// Zombie::~Zombie()
// {
// }


#endif