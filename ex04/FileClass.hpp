#ifndef FILECLASS_H
# define FILECLASS_H

# include <iostream>
# include <fstream>

class FileClass
{
private:
    std::ifstream   _file;
    std::string     _s1;
    std::string     _s2;

public:
    int error(std::string str);
    FileClass(std::string file, std::string s1, std::string s2);
    ~FileClass();
};

# include <iostream>
# include <fstream>

#endif