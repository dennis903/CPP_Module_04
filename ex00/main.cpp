#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main()
{

	std::cout << "============ test1 ===========" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
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

	return (0);
}