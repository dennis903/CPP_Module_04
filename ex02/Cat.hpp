#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal
{
	private:
		std::string		name;
		Brain*			brain;
	public:
		Cat();
		Cat(const std::string &_name);
		Cat(const Cat &_Cat);
		virtual ~Cat();
		Cat &operator = (const Cat &_Cat);
		virtual void	makeSound() const;
		std::string		getName() const;
		Brain*			getBrain() const;
};
#endif