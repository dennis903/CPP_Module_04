#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
	private:
		std::string		name;
	public:
		Dog();
		Dog(const std::string &_name);
		Dog(const Dog &_Dog);
		virtual ~Dog();
		Dog	&operator = (const Dog &_Dog);
		virtual void	makeSound() const;
		std::string		getName() const;
};
#endif