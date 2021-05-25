/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:30:51 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:41:51 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &pr)
{
	*this = pr;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle	&PlasmaRifle::operator =(PlasmaRifle const &pr)
{
	this->_name = pr.getName();
	this->_apcost = pr.getAPCost();
	this->_damage = pr.getDamage();
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
