#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), name("No name"), brain(new Brain)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::Dog(const std::string &_name) : Animal("Dog"), name(_name), brain(new Brain)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::Dog(const Dog &_Dog)
{
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, _Dog.brain->getIdea(i));
	}
	this->name = _Dog.name;
	this->type = _Dog.type;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " " << this->name << " is dead" << std::endl;
}

Dog&		Dog::operator = (const Dog &_Dog)
{
	if (this == &_Dog)
		return (*this);
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, _Dog.brain->getIdea(i));
	}
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

Brain*		Dog::getBrain() const
{
	return (this->brain);
}