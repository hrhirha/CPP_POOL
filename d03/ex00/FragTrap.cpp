/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 08:27:40 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 08:27:41 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string name): _hp(100), _maxHp(100),
	_ep(100), _maxEp(100), _lvl(1), _name(name), _meleeAttDam(30),
	_rangedAttDam(20), _armorDamRed(5)
{
	std::cout << "[Constructor] " << this->_name <<
		": Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FT)
{
	*this = FT;
	std::cout << "[Copy Constructor] " << this->_name << 
		": Let's get this party started!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[Destructor] " << this->_name <<
		": Argh arghargh death gurgle gurglegurgle urgh... death."
		<< std::endl;
}

FragTrap	&FragTrap::operator =(FragTrap const &FT)
{
	this->_hp = FT._hp;
	this->_maxHp = FT._maxEp;
	this->_ep = FT._ep;
	this->_maxEp = FT._maxEp;
	this->_lvl = FT._lvl;
	this->_name = FT._name;
	this->_meleeAttDam = FT._meleeAttDam;
	this->_rangedAttDam = FT._rangedAttDam;
	this->_armorDamRed = FT._armorDamRed;

	std::cout << "Assignation operator" << std::endl;

	return (*this);
}

int		FragTrap::getHP(void) const
{
	return (this->_hp);
}

int		FragTrap::getEP(void) const
{
	return (this->_ep);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "[ranged attack] " << std::endl;
	std::cout << this->_name << ": Step right up, to the Bulletnator 9000! " 
		 << target << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "[melee attack] " << std::endl;
	std::cout << this->_name << ": Heyyah! you stupid "<< target << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int dam;

	dam = this->_hp - (amount - this->_armorDamRed);
	this->_hp = dam <= 0 ? 0 : dam;
	if (this->_hp >= this->_maxHp) this->_hp = this->_maxHp;
	std::cout << "[taking damage] " << std::endl;
	std::cout << this->_name << ": Oh my God, I'm leaking! I think I'm leaking! Ahhhh, \
I'm leaking! There's oil everywhere!" << std::endl;
	if (this->_hp == 0)
		std::cout << "Game Over" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int repair;

	repair = this->_hp + amount;
	this->_hp = repair >= this->_maxHp ? this->_maxHp : repair;
	repair = repair - this->_maxHp <= 0 ? 0 : repair - this->_maxHp;

	repair = this->_ep + amount;
	this->_ep = repair >= this->_maxEp ? this->_maxEp : repair;
	std::cout << "[after repair] " << std::endl;
	std::cout << this->_name << ": Good as new, I think. Am I leaking?"
		<< std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int index;
	std::string attaks[] = {"Clap-In-The-Box",
							"Gun Wizard",
							"One Shot Wonder",
							"Laser Inferno",
							"Torgue Fiesta",
							"Pirate Ship Mode",
							"Miniontrap",
							"shhh... Trap"};

	std::cout << "[calling vaulthunter_dot_exe]" << std::endl;
	if (this->_ep < 25)
		std::cout << this->_name << ": Where'd all my bullets go?" << std::endl;
	else
	{
		srand(time(0));
		index = rand() % 8;
		this->_ep -= 25;
		std::cout << this->_name << ": Look out everybody, things are about \
to get awesome!" << std::endl;
		std::cout << "Choosing attack : " << attaks[index] << std::endl;
		std::cout << "attacking " << target << std::endl;
	}
}
