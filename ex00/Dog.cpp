#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), name("No name")
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::Dog(const std::string &_name) : Animal("Dog"), name(_name)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::Dog(const Dog &_Dog)
{
	*this = _Dog;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " " << this->name << " is dead" << std::endl;
}

Dog&		Dog::operator = (const Dog &_Dog)
{
	if (this == &_Dog)
		return (*this);
	this->name = _Dog.name;
	this->type = _Dog.type;
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "Woof Woof!!" << std::endl;
}

std::string	Dog::getName() const
{
	return (this->name);
}
