#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     index;
    public:
        PhoneBook();
        ~PhoneBook();
		void		welcome(void);
        void        add(void);
        void        view(void);
        void        search(void);
        std::string input(std::string text);
};

#endif
