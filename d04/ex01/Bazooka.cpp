/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bazooka.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:55 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 17:10:46 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bazooka.hpp"

Bazooka::Bazooka() : AWeapon("Bazooka", 10, 30) {}

Bazooka::Bazooka(Bazooka const &ba)
{
	*this = ba;
}

Bazooka::~Bazooka() {}

Bazooka	&Bazooka::operator =(Bazooka const &ba)
{
	this->_name = ba.getName();
	this->_apcost = ba.getAPCost();
	this->_damage = ba.getDamage();
	return (*this);
}

void	Bazooka::attack() const
{
	std::cout << "* PPffffff *" << std::endl;
}
