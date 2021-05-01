/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:10:16 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 17:21:09 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->_name = n;
}

HumanB::~HumanB() {}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with his "
		<< (*this->_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}
