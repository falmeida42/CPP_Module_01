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

int initializeVariables(std::ifstream &file, std::string &s1, std::string &s2, char **argv) {
    file.open(argv[1]);
    if (file.fail())
        return(error("Error to Open the file"));
    s1 = argv[2];
    s2 = argv[3];
    return (0);
}

int main(int argc, char **argv) {

    if (argc != 4)
        return(error("The Program only takes three parameters in the following order: a filename and two strings, s1 and s2."));
    
    FileClass   file(argv[1], argv[2], argv[3]);
    
    file.check();
   return (0);
}