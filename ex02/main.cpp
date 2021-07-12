#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* Marine = new TacticalMarine;
	ISpaceMarine* Assault = new AssaultTerminator;
	ISpaceMarine* Firebet = new TacticalMarine;
	ISpaceMarine* Medic = new AssaultTerminator;
	ISpaceMarine* SiegeTank = Assault->clone();
	ISquad* First_Squad = new Squad;

	First_Squad->push(Marine);
	First_Squad->push(Assault);
	First_Squad->push(Medic);
	First_Squad->push(Firebet);
	First_Squad->push(SiegeTank);

	for (int i = 0; i < First_Squad->getCount(); i++)
	{
		std::cout << "=========" << i << " unit attack ========" << std::endl;
		First_Squad->getUnit(i)->battleCry();
		First_Squad->getUnit(i)->meleeAttack();
		First_Squad->getUnit(i)->rangedAttack();
	}

	delete First_Squad;
	return 0;
}