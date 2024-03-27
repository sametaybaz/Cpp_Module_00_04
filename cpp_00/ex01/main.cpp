#include "PhoneBook.hpp"
#include <iostream>
# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"

int main(void)
{
    PhoneBook phoneBook;
    std::string input = "";
	phoneBook.welcome();

    while ((input = phoneBook.input("Command: ")) != EXIT)
    {		
        if (input == ADD)
            phoneBook.add();
        else if (input == SEARCH)
        {
            phoneBook.view();
            phoneBook.search();
        }
        else
		{ 
            std::cout << "Only ADD , SEARCH and EXIT commands are supported." << std::endl;
			std::cout << "-----" << std::endl;
		}
    }
    return (0);
}

