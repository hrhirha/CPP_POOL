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

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	ISquad	*vld = vlc;

	vld->push(kriss);

	std::cout << std::endl;
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