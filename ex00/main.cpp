#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main()
{

	std::cout << "============ test1 ===========" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "============ test2 ===========" << std::endl;
	{
		const Animal* doge = new Dog("Marie");
		const Animal* kitty = new Cat("Aong");

		doge->makeSound();
		kitty->makeSound();
		delete doge;
		delete kitty;
	}
	std::cout << "============ Wrong Animal test =========" << std::endl;
	{
		const WrongAnimal* wrong = new WrongCat("wrong");

		wrong->makeSound();
		delete wrong;
	}
	return (0);
}