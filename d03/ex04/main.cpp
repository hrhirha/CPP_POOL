#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	// FragTrap

	FragTrap	F1("FR4G-TP1");
	std::cout << "\n";

	F1.rangedAttack("Skag Pup");
	std::cout << "\n";
	F1.meleeAttack("Rakk");
	std::cout << "\n";

	F1.takeDamage(75);
	std::cout << "HP = " << F1.getHP() << "\n\n";

	F1.vaulthunter_dot_exe("Lava Crab Worm");
	std::cout << "EP = " << F1.getEP() << "\n\n";

	F1.beRepaired(120);
	std::cout << "HP = " << F1.getHP() << "\nEP = " << F1.getEP() << "\n\n";
	
	// ScavTrap

	ScavTrap	F2("SC4V-TP1");
	std::cout << "\n";

	F2.rangedAttack("Skag Pup");
	std::cout << "\n";
	F2.meleeAttack("Rakk");
	std::cout << "\n";

	F2.takeDamage(75);
	std::cout << "HP = " << F2.getHP() << "\n\n";
	F2.beRepaired(120);
	std::cout << "HP = " << F2.getHP() << "\n\n";

	F2.challengeNewcomer();
	std::cout << "\n";

	// NinjaTrap

	NinjaTrap	F3("N1NJ4-TP1");
	std::cout << "\n";

	F3.rangedAttack("Skag Pup");
	std::cout << "\n";
	F3.meleeAttack("Rakk");
	std::cout << "\n";

	F3.takeDamage(20);
	std::cout << "HP = " << F3.getHP() << "\n\n";
	F3.beRepaired(120);
	std::cout << "HP = " << F3.getHP() << "\n\n";

	F3.ninjaShoebox(F1);
	std::cout << "\n";
	F3.ninjaShoebox(F2);
	std::cout << "\n";

	// SuperTrap

	SuperTrap Super("SUPER");
	std::cout << "\n";
	SuperTrap starp(Super);

	starp.rangedAttack("Skag Pup");
	std::cout << "\n";

	starp.meleeAttack("Rakk");
	std::cout << "\n";

	starp.ninjaShoebox(F1);
	std::cout << "\n";

	starp.vaulthunter_dot_exe("Lava Crab Worm");
	std::cout << "EP = " << starp.getEP() << "\n\n";
}