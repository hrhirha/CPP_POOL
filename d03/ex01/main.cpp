#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
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
}