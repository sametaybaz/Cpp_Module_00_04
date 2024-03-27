#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

class Contact
{
    private:
        std::string name;
        std::string surname;
        std::string username;
        std::string phone;
        std::string secret;

        std::string input(std::string text);
        std::string format(std::string text);
    public:
        Contact(void);
        ~Contact(void);

        void    init(void);
        void    view(int index);
        void    display(int index);
};
#endif
