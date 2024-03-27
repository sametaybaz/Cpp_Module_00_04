#include "Harl.hpp"


int main(int ac,char **av)
{   
    if (ac != 2)
    {
        std::cerr << "It is mandatory to enter 1 parameter" << std::endl;
        return EXIT_FAILURE;
    }

    std::string level = av[1];
    Harl    harl;

    harl.complain(level);

    return (0);
}

