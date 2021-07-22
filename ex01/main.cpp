#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int		main()
{
	std::cout << "============ test1 ===========" << std::endl;
	{
		Animal*  animals[10] =
		{
			new Cat("a"),
			new Cat("b"),
			new Cat("c"),
			new Cat("d"),
			new Cat("e"),
			new Dog("ab"),
			new Dog("cd"),
			new Dog("ef"),
			new Dog("gh"),
			new Dog("ij")
		};

		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	}
	std::cout << "============= test2 : deep Copy ===========" << std::endl;
	{
		Dog Doge("doge");
		Dog copy_Doge(Doge);
		Cat Kitty("Kitty");
		Cat copy_Kitty(Kitty);

		std::cout << "<Doge's address>" << std::endl;
		std::cout << Doge.getBrain() << std::endl;
		std::cout << "<Copy Doge's address>" << std::endl;
		std::cout << copy_Doge.getBrain() << std::endl << std::endl;
		std::cout << "<Kitty's address>" << std::endl;
		std::cout << Kitty.getBrain() << std::endl;
		std::cout << "<Copy Kitty's address" << std::endl;
		std::cout << copy_Kitty.getBrain() << std::endl<<std::endl;
	}
	std::cout << "============= test3 : brain test ===========" << std::endl;
	{
		Dog Doge("doge");
		Dog copy_Doge("Copy_Doge");

		Doge.getBrain()->setIdeas(0, "test1");
		Doge.getBrain()->setIdeas(1, "test2");
		std::cout << Doge.getBrain()->getIdea(0) << std::endl;
		std::cout << Doge.getBrain()->getIdea(1) << std::endl;
		copy_Doge = Doge;
		copy_Doge.getBrain()->setIdeas(0, "test1");
		copy_Doge.getBrain()->setIdeas(1, "test2");
		std::cout << Doge.getBrain()->getIdea(0) << std::endl;
		std::cout << Doge.getBrain()->getIdea(1) << std::endl;
	}
	return (0);
}