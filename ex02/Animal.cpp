#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << this->type << " is born" << std::endl;
}

Animal::Animal(const std::string &_type) : type(_type)
{
	std::cout << this->type << " is born" << std::endl;
}

Animal::Animal(const Animal &_Animal)
{
	*this = _Animal;
	std::cout << this->type << " is born" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " is dead" << std::endl;
}

Animal&		Animal::operator = (const Animal &_Animal)
{
	if (this == &_Animal)
		return (*this);
	this->type = _Animal.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}
