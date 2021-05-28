#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* kriss = new TacticalMarine;
	ISpaceMarine* john = new AssaultTerminator;

	ISquad	*vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	ISquad	*vld = new Squad;
	
	vld->push(kriss);
	vld->push(john);
	
	vld  = vlc;

	std::cout << std::endl;
	
	std::cout << &vlc << " " << &vld << std::endl << std::endl;
	std::cout << vlc->getUnit(0) << " " << vld->getUnit(0) << std::endl << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);

		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	delete vlc;

	while (true) {}

	return (0);
}