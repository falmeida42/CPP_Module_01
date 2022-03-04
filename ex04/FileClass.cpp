#include "FileClass.hpp"

int FileClass::error(std::string str) {
    std::cout << str << std::endl;
    return (-1);
}

void    FileClass::lineModifier(void) {
    if ()
}

void    FileClass::sed() {
    
     std::ofstream   newFile(_fileName += ".replace");

    while (_file)
    {
        getline(_file, _fileContent);
        lineModifier();
        newFile << _fileContent << std::endl;
    }
}

FileClass::FileClass(std::string file, std::string s1, std::string s2)
{
    _file.open(file);
    _fileName = file;
    
    
    _s1 = s1;
    _s2 = s2;
}

int FileClass::check(void) {
    if (_file.fail())
        return((FileClass::error("error")));
    return (0);
}

FileClass::~FileClass()
{
}