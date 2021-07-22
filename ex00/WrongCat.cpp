#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"), name("No name")
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

WrongCat::WrongCat(const std::string &_name) : WrongAnimal("WrongCat"), name(_name)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat &_WrongCat)
{
	*this = _WrongCat;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " " << this->name << " is dead" << std::endl;
}

WrongCat&		WrongCat::operator = (const WrongCat &_WrongCat)
{
	if (this == &_WrongCat)
		return (*this);
	this->name = _WrongCat.name;
	this->type = _WrongCat.type;
	return (*this);
}

void		WrongCat::makeSound() const
{
	std::cout << "Mew Mew~~" << std::endl;
}

std::string	WrongCat::getName() const
{
	return (this->name);
}