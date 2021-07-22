#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	private:
		std::string		name;
	public:
		WrongCat();
		WrongCat(const std::string &_name);
		WrongCat(const WrongCat &_WrongCat);
		~WrongCat();
		WrongCat &operator = (const WrongCat &_Cat);
		void	makeSound() const;
		std::string		getName() const;
};
#endif