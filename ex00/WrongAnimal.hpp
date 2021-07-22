#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>
class WrongAnimal
{
	protected:
		std::string		type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string &_type);
		WrongAnimal(const WrongAnimal &_WrongAnimal);
		~WrongAnimal();
		WrongAnimal &operator = (const WrongAnimal &_WrongAnimal);
		std::string	getType() const;
		void		makeSound() const;
};
#endif