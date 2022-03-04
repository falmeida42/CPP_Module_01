#include "FileClass.hpp"



void    lineModifier(std::string &str) {



}

void    readFile(std::ifstream   &file, std::string argv) {
    std::string     fileContent;
    std::ofstream   newFile(argv += ".replace");

    while (file)
    {
        getline(file, fileContent);
        lineModifier(fileContent);
        newFile << fileContent << std::endl;
    }

    if (newFile.is_open())
        newFile.close();
}

int main(int argc, char **argv) {

    if (argc != 4)
        return(FileClass::error("The Program only takes three parameters in the following order: a filename and two strings, s1 and s2."));
    FileClass   file(argv[1], argv[2], argv[3]);
    if (file.check() == -1)
        return(-1);
    file.sed();
   return (0);
}