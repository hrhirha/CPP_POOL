/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 10:28:32 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/08 10:28:34 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "[Default Constructor][NinjaTrap]" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name):
	ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "[Constructor][NinjaTrap]" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &NT)
{
	std::cout << "[Copy Constructor][NinjaTrap]" << std::endl;
	*this = NT;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "[Destructor][NinjaTrap]" << std::endl;
}

NinjaTrap	&NinjaTrap::operator =(NinjaTrap const &NT)
{
	this->_hp = NT._hp;
	this->_maxHp = NT._maxEp;
	this->_ep = NT._ep;
	this->_maxEp = NT._maxEp;
	this->_lvl = NT._lvl;
	this->_name = NT._name;
	this->_meleeAttDam = NT._meleeAttDam;
	this->_rangedAttDam = NT._rangedAttDam;
	this->_armorDamRed = NT._armorDamRed;

	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "[NinjaTrap::rangedAttack() Called]" << std::endl;
	std::cout << this->_name << " attacks " << target << " at RANGE, causing him "
		<< this->_rangedAttDam << " HP" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "[NinjaTrap::meleeAttack() Called]" << std::endl;
	std::cout << this->_name << " melee " << target << " and caused him "
		<< this->_meleeAttDam << " HP" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &NT)
{
	std::cout << this->_name << " performs a NINJASHOEBOX attack on "
		<< NT.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &FT)
{
	std::cout << this->_name << " performs a NINJASHOEBOX attack on "
		<< FT.getName()<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &ST)
{
	std::cout << this->_name << " performs a NINJASHOEBOX attack on "
		<< ST.getName() << std::endl;
}
