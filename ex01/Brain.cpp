#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructer" << std::endl;
}

Brain::Brain(const Brain &_Brain)
{
	*this = _Brain;
	std::cout << "Brain Constructer" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructed" << std::endl;
}

Brain& Brain::operator = (const Brain &_Brain)
{
	if (this == &_Brain)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = _Brain.ideas[i];
	}
	return (*this);
}

void		Brain::setIdeas(int idx, const std::string &idea)
{
	if (idx < 0 || idx >= 100)
		return ;
	this->ideas[idx] = idea;
}

std::string	Brain::getIdea(int idx) const
{
	if (idx < 0 || idx >= 100)
		return (NULL);
	return (this->ideas[idx]);
}