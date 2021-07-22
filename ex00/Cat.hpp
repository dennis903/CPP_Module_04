#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
class Cat : public Animal
{
	private:
		std::string		name;
	public:
		Cat();
		Cat(const std::string &_name);
		Cat(const Cat &_Cat);
		virtual ~Cat();
		Cat &operator = (const Cat &_Cat);
		virtual void	makeSound() const;
		std::string		getName() const;
};
#endif