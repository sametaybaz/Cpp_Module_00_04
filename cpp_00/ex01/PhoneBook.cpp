#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::welcome(void)
{ 	
	std::cout << "+---------WELCOME TO PHONE BOOK-----------+" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
    std::cout << "| 1. ADD    - Add a new contact           |" << std::endl;
    std::cout << "| 2. SEARCH - Search for a contact        |" << std::endl;
    std::cout << "| 3. EXIT   - Exit the program            |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
    std::cout << "   Please make your selection: " << std::endl;
}

std::string PhoneBook::input(std::string text)
{
    std::string input = "";
    std::cout << text << std::endl;
    std::getline(std::cin, input);
	std::cout << "-----" << std::endl;
    return (input);
}

void    PhoneBook::add(void)
{ 
    this->contacts[this->index].init();
    this->index++;
    if (this->index == 8)
        this->index = 0; 
}

void    PhoneBook::view(void)
{
    std::cout	<< "|" << std::right << std::setw(10) << "ID" << "|"
    			<< std::right << std::setw(10) << "NAME" << "|"
    			<< std::right << std::setw(10) << "SURNAME" << "|"
    			<< std::right << std::setw(10) << "USERNAME" << "|"<< std::endl;

    for (int i=0;i<8;i++)
        this->contacts[i].view(i);

    std::cout << std::endl;
}

void    PhoneBook::search(void)
{
    std::string id = this->input("Search ID: ");

	int index;
    std::istringstream num(id);
	num >> index;

    if (id.length() == 1 && id[0] >= '0' && id[0] <= '7')
        this->contacts[index].display(index);
    else
    {
        std::cout << "Invalid index" << std::endl;
        this->search();
    }
}
