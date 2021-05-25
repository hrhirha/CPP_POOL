/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:54:42 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:40:43 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const &weapon)
{
	*this = weapon;
}

AWeapon::~AWeapon() {}

AWeapon	&AWeapon::operator =(AWeapon const &weapon)
{
	this->_name = weapon.getName();
	this->_apcost = weapon.getAPCost();
	this->_damage = weapon.getDamage();
	return (*this);
}

std::string const	AWeapon::getName() const
{
	return (this->_name);
}

int	AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int	AWeapon::getDamage() const
{
	return (this->_damage);
}