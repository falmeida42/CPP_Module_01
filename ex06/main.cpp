#include "Karen.hpp"

int main(int argc, char **argv) {
    
    Karen   karen;

    switch (argc)
    {
        case 2:
            karen.complain(argv[1]);
            break;
    
        default:
            std::cout << "[ Nothing to Karen filter ]" << std::endl;
            break;
    }
}