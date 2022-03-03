#include "FileClass.hpp"

int FileClass::error(std::string str) {
    std::cout << str << std::endl;
    return (-1);
}

FileClass::FileClass(std::string file, std::string s1, std::string s2)
{
    _file.open(file);
    _s1 = s1;
    _s2 = s2;
}

FileClass::~FileClass()
{
}