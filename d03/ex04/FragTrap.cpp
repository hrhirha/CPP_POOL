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

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name):
	ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout << "[Constructor][FragTrap]" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FT)
{
	*this = FT;
	std::cout << "[Copy Constructor][FragTrap]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[Destructor][FragTrap]" << std::endl;
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

	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "[FragTrap::rangedAttack() Called]" << std::endl;
	std::cout << this->_name << " attacks " << target << " at RANGE, causing him "
		<< this->_rangedAttDam << " HP" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "[FragTrap::meleeAttack() Called]" << std::endl;
	std::cout << this->_name << " melee " << target << " and caused him "
		<< this->_meleeAttDam << " HP" << std::endl;
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
