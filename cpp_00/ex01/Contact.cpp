#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::input(std::string text)
{
	std::string input = "";
	std::cout << text << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "You cannot pass empty input." << std::endl;
		input = this->input(text);
	}
	return (input);
}

std::string Contact::format(std::string text)
{
	if (text.length() > 10)
		return text.substr(0, 9) + ".";
	return text;
}

void Contact::init(void)
{
	this->name = this->input("name: ");
	this->surname = this->input("surname: ");
	this->username = this->input("username: ");
	this->phone = this->input("phone: ");
	this->secret = this->input("secret: ");
	std::cout << "-----" << std::endl;
}

void Contact::view(int index)
{
	if (this->name.empty() || this->surname.empty() || this->username.empty() || this->phone.empty() || this->secret.empty())
		return;

	std::stringstream ss;
	ss << index;

	std::cout	<< "|" << std::right << std::setw(10) << ss.str() << "|"
				<< std::right << std::setw(10) << format(this->name) << "|"
				<< std::right << std::setw(10) << format(this->surname) << "|"
				<< std::right << std::setw(10) << format(this->username) << "|"
				<< std::endl;
}

void Contact::display(int index)
{
	if (this->name.empty() || this->surname.empty() || this->username.empty() || this->phone.empty() || this->secret.empty())
		return;
	std::cout << "CONTACT #" << index
			  << "\n    name: " << this->name
			  << "\n surname: " << this->surname
			  << "\nusername: " << this->username
			  << "\n   phone: " << this->phone
			  << "\n  secret: " << this->secret
			  << "\n\n";
	std::cout << "-----" << std::endl;
}
