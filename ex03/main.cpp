#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "============ Default ============" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	{
		std::cout << "======== When Type does not exist ========" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << src->createMateria("other") << std::endl;
		delete src;
	}
	{
		std::cout << "======== XP projection ========" << std::endl;

		Ice *ice = new Ice;
		ICharacter* me = new Character("me");
		ICharacter* enemy = new Character("enemy");

		me->equip(ice);
		std::cout<< ice->getXP() << std::endl;
		me->use(0, *enemy);
		std::cout<< ice->getXP() << std::endl;
		me->use(0, *enemy);
		std::cout<< ice->getXP() << std::endl;
		me->use(0, *enemy);
		std::cout<< ice->getXP() << std::endl;
		me->use(0, *enemy);
		std::cout<< ice->getXP() << std::endl;

		delete ice;
		delete me;
		delete enemy;
	}
	return 0;
}