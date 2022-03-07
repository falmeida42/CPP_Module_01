#include "Karen.hpp"

void    Karen::complain(std::string level) {

    int num;
    void (Karen::*levelptr[])() = {&Karen::nothing, &Karen::debug, &Karen::info, &Karen::warming, &Karen::error};
    num = 0;
    !(level.compare("DEBUG")) && (num = 1);
    !(level.compare("INFO")) && (num = 2);
    !(level.compare("WARMING")) && (num = 3);
    !(level.compare("ERROR")) && (num = 4);
    
   (this->*levelptr[num])();
}

Karen::Karen() {
    std::cout << "Karen created" << std::endl;

}

Karen::~Karen() {
    std::cout << "Karen destroied" << std::endl;
}

void    Karen::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
} 

void    Karen::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warming( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::nothing( void ) {
    std::cout << "Probably complaining about insignificant problems" << std::endl;
}