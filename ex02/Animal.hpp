#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
class Animal
{
	protected:
		std::string		type;
	public:
		Animal();
		Animal(const std::string &_type);
		Animal(const Animal &_Animal);
		virtual ~Animal();
		Animal &operator = (const Animal &_Animal);
		virtual std::string	getType() const;
		virtual void		makeSound() const = 0;
};
#endif