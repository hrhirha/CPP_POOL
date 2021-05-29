#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* kriss = new TacticalMarine;
	ISpaceMarine* jack = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* john = new AssaultTerminator;

	ISquad	*vlc = new Squad;
	vlc->push(bob);
	vlc->push(kriss);

	ISquad	*vlc2 = new Squad;
	vlc2->push(jim);
	vlc2->push(john);

	*vlc2 = *vlc;

	vlc2->push(jack);

	std::cout << std::endl;

	std::cout << "&vlc		= " << &vlc << "\n";
	std::cout << "&vlc2		= " << &vlc2 << "\n\n";
	
	std::cout << "&vlc.unit	= " << vlc->getUnit(0) << "\n";
	std::cout << "&vlc2.unit	= " << vlc2->getUnit(0) << "\n\n";

	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	delete vlc;
	delete vlc2;

	return (0);
}