#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal")
{
	std::cout << this->type << " is born" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type)
{
	std::cout << this->type << " is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal)
{
	*this = _WrongAnimal;
	std::cout << this->type << " is born" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " is dead" << std::endl;
}

WrongAnimal&		WrongAnimal::operator = (const WrongAnimal &_WrongAnimal)
{
	if (this == &_WrongAnimal)
		return (*this);
	this->type = _WrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "Ahuuuuuuuu~~~" << std::endl;
}