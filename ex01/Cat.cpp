#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), name("No name"), brain(new Brain)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::Cat(const std::string &_name) : Animal("Cat"), name(_name), brain(new Brain)
{
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::Cat(const Cat &_Cat)
{
	this->brain = new Brain;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, _Cat.brain->getIdea(i));
	}
	this->name = _Cat.name;
	this->type = _Cat.type;
	std::cout << this->type << " " << this->name << " is born" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " " << this->name << " is dead" << std::endl;
}

Cat&		Cat::operator = (const Cat &_Cat)
{
	if (this == &_Cat)
		return (*this);
	this->brain = new Brain;	
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdeas(i, _Cat.brain->getIdea(i));
	}
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

Brain*		Cat::getBrain() const
{
	return (this->brain);
}