#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string		name;
		Brain*			brain;
	public:
		Dog();
		Dog(const std::string &_name);
		Dog(const Dog &_Dog);
		virtual ~Dog();
		Dog	&operator = (const Dog &_Dog);
		virtual void	makeSound() const;
		std::string		getName() const;
		Brain*			getBrain() const;
};
#endif