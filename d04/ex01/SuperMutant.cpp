/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:46:00 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:45:30 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(70, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &sm)
{
	*this = sm;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	&SuperMutant::operator =(SuperMutant const &sm)
{
	this->_hp = sm.getHP();
	this->_type = sm.getType();
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage <= 0) return;
	this->_hp -= damage;
	this->_hp = this->_hp <= 0 ? 0 : this->_hp;
}
