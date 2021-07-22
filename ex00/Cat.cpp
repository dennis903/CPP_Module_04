#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), name("No name")
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::Cat(const std::string &_name) : Animal("Cat"), name(_name)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::Cat(const Cat &_Cat)
{
	*this = _Cat;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " " << this->name << " is dead" << std::endl;
}

Cat&		Cat::operator = (const Cat &_Cat)
{
	if (this == &_Cat)
		return (*this);
	this->name = _Cat.name;
	this->type = _Cat.type;
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "Mew Mew~~" << std::endl;
}

std::string	Cat::getName() const
{
	return (this->name);
}