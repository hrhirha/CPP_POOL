/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:38:41 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:38:43 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string name): _hp(100), _maxHp(100),
	_ep(50), _maxEp(50), _lvl(1), _name(name), _meleeAttDam(20),
	_rangedAttDam(15), _armorDamRed(3)
{
	std::cout << "[name Constructor] " << this->_name <<
		": Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &FT)
{
	*this = FT;
	std::cout << "[Copy Constructor] " << this->_name << 
		": Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[Destructor] " << this->_name << ": NOOO! You got me!"
		<< std::endl;
}

ScavTrap	&ScavTrap::operator =(ScavTrap const &FT)
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

int		ScavTrap::getHP(void) const
{
	return (this->_hp);
}

int		ScavTrap::getEP(void) const
{
	return (this->_ep);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "[ranged attack] " << std::endl;
	std::cout << this->_name << ": Is '" << target << "' dead? Can, can I open my eyes now? " 
		 << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "[melee attack] " << std::endl;
	std::cout << this->_name << ": Take that! "<< target << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int dam;

	dam = this->_hp - (amount - this->_armorDamRed);
	this->_hp = dam <= 0 ? 0 : dam;
	if (this->_hp >= this->_maxHp) this->_hp = this->_maxHp;
	std::cout << "[taking damage] " << std::endl;
	std::cout << this->_name << ": That looks like it hurts!" << std::endl;
	if (this->_hp == 0)
		std::cout << "DEATH !!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int repair;

	repair = this->_hp + amount;
	this->_hp = repair >= this->_maxHp ? this->_maxHp : repair;
	repair = repair - this->_maxHp <= 0 ? 0 : repair - this->_maxHp;

	repair = this->_ep + amount;
	this->_ep = repair >= this->_maxEp ? this->_maxEp : repair;
	std::cout << "[after repair] " << std::endl;
	std::cout << this->_name << ": I feeel born again!"
		<< std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
    int index;
	std::string challenges[] = {"Thumb Fight",
							"Try Not To Blink",
							"Who Have Stronger Lungs?",
							"spicy sauce",
							"rock, paper, scissor",
							"one leg race"};
    srand(time(0));
		index = rand() % 6;
		this->_ep -= 25;
		std::cout << "Challenge : " << challenges[index] << std::endl;
}
