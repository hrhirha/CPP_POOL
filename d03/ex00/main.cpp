#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "\n"; FragTrap	F1("FR4G-TP1");

	std::cout << "\n"; F1.rangedAttack("Skag Pup");
	std::cout << "\n"; F1.meleeAttack("Rakk");

	std::cout << "\n"; F1.takeDamage(75);
	std::cout << "\n"; F1.beRepaired(120);

	std::cout << "\n"; F1.vaulthunter_dot_exe("Lava Crab Worm");
	std::cout << "\n";
}