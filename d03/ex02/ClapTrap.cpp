/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:39:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:39:38 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "[Default Constructor][ClapTrap]" << std::endl;
}

ClapTrap::ClapTrap(int hp, int maxHp, int ep, int maxEp, int lvl,
	std::string name, int meleeAttDam, int rangedAttDam, int armorDamRed):
	_hp(hp), _maxHp(maxHp), _ep(ep), _maxEp(maxEp), _lvl(lvl), _name(name),
	_meleeAttDam(meleeAttDam), _rangedAttDam(rangedAttDam), _armorDamRed(armorDamRed)
{
	std::cout << "[Constructor][ClapTrap]" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &CT)
{
	*this = CT;
	std::cout << "[Copy Constructor][ClapTrap]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[Destructor][ClapTrap]" << std::endl;
}

ClapTrap	&ClapTrap::operator =(ClapTrap const &CT)
{
	this->_hp = CT._hp;
	this->_maxHp = CT._maxEp;
	this->_ep = CT._ep;
	this->_maxEp = CT._maxEp;
	this->_lvl = CT._lvl;
	this->_name = CT._name;
	this->_meleeAttDam = CT._meleeAttDam;
	this->_rangedAttDam = CT._rangedAttDam;
	this->_armorDamRed = CT._armorDamRed;

	return (*this);
}

int		ClapTrap::getHP(void) const
{
	return (this->_hp);
}

int		ClapTrap::getEP(void) const
{
	return (this->_ep);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " at RANGE, causing him "
		<< this->_rangedAttDam << " HP" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->_name << " melee " << target << " and caused him "
		<< this->_meleeAttDam << " HP" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int dam;

	dam = this->_hp - (amount - this->_armorDamRed);
	this->_hp = dam <= 0 ? 0 : dam;
	if (this->_hp >= this->_maxHp) this->_hp = this->_maxHp;
	std::cout << "[taking damage] " << std::endl;
	std::cout << this->_name << ": Oh my God, I'm leaking!" << std::endl;
	if (this->_hp == 0)
		std::cout << "DEATH !!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
