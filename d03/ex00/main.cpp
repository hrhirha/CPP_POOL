#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	F1("FR4G-TP1");
	std::cout << "\n";

	F1.rangedAttack("Skag Pup");
	std::cout << "\n";
	F1.meleeAttack("Rakk");
	std::cout << "\n";
	F1.takeDamage(5);
	std::cout << "HP = " << F1.getHP() << "\n" << std::endl;
	F1.vaulthunter_dot_exe("Lava Crab Worm");
	std::cout << "HP = " << F1.getHP() << std::endl;
	std::cout << "EP = " << F1.getEP() << "\n" << std::endl;
	F1.beRepaired(120);
	std::cout << "HP = " << F1.getHP() << std::endl;
	std::cout << "EP = " << F1.getEP() << std::endl;
	std::cout << "\n";
}