/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:43:34 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:44:44 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const &pr)
{
	*this = pr;
}

PowerFist::~PowerFist() {}

PowerFist	&PowerFist::operator =(PowerFist const &pr)
{
	this->_name = pr.getName();
	this->_apcost = pr.getAPCost();
	this->_damage = pr.getDamage();
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
