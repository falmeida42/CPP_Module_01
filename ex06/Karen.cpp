#include "Karen.hpp"

void    Karen::complain(std::string level) {
    void    (Karen::*levelptr[]) () = {&Karen::debug, &Karen::info };

    (this->*levelptr[0]) ();
}

void    Karen::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more" << std::endl;
}

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}