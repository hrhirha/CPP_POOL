/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:09:26 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/08 12:09:27 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {}

SuperTrap::SuperTrap(std::string name):
	ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "[Constructor][SuperTrap]" << std::endl;
	std::cout << this->_hp << std::endl;
	std::cout << this->_maxHp << std::endl;
	std::cout << this->_ep << std::endl;
	std::cout << this->_maxEp << std::endl;
	std::cout << this->_lvl << std::endl;
	std::cout << this->_name << std::endl;
	std::cout << this->_meleeAttDam << std::endl;
	std::cout << this->_rangedAttDam << std::endl;
	std::cout << this->_armorDamRed << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &SuT)
{
	*this = SuT;
}

SuperTrap::~SuperTrap()
{
	std::cout << "[Destructor][SuperTrap]" << std::endl;
}

SuperTrap	&SuperTrap::operator =(SuperTrap const &SuT)
{
	this->_hp = SuT._hp;
	this->_maxHp = SuT._maxEp;
	this->_ep = SuT._ep;
	this->_maxEp = SuT._maxEp;
	this->_lvl = SuT._lvl;
	this->_name = SuT._name;
	this->_meleeAttDam = SuT._meleeAttDam;
	this->_rangedAttDam = SuT._rangedAttDam;
	this->_armorDamRed = SuT._armorDamRed;

	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
