/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:39:09 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:39:11 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name):
	ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << "[Constructor][ScavTrap]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ST)
{
	*this = ST;
	std::cout << "[Copy Constructor][ScavTrap]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[Destructor][ScavTrap]" << std::endl;
}

ScavTrap	&ScavTrap::operator =(ScavTrap const &ST)
{
	this->_hp = ST._hp;
	this->_maxHp = ST._maxEp;
	this->_ep = ST._ep;
	this->_maxEp = ST._maxEp;
	this->_lvl = ST._lvl;
	this->_name = ST._name;
	this->_meleeAttDam = ST._meleeAttDam;
	this->_rangedAttDam = ST._rangedAttDam;
	this->_armorDamRed = ST._armorDamRed;

	return (*this);
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
