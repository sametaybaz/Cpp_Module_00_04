
#include "Harl.hpp"

int main()
{   
    std::string input;
    Harl Harl;

    do {
        std::cout << "Enter a level: " << std::endl;
        std::cin >> input;
        Harl.complain(input);
    } while (input.compare("EXIT"));

    return 0;
}