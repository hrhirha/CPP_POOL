#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Bazooka.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Phoenix.hpp"

int	main(void)
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* b1 = new Phoenix();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ba = new Bazooka();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(ba);
	me->attack(b1);
	std::cout << *me;

	return (0);
}