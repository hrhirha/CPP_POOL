/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phoenix.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:54:43 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:56:33 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phoenix.hpp"

Phoenix::Phoenix() : Enemy(90, "Phoenix")
{
	std::cout << "Phoenix is here!!" << std::endl;
}

Phoenix::Phoenix(Phoenix const &p)
{
	*this = p;
}

Phoenix::~Phoenix()
{
	std::cout << "Phoenix died..." << std::endl;
}

Phoenix	&Phoenix::operator =(Phoenix const &p)
{
	this->_hp = p.getHP();
	this->_type = p.getType();
	return (*this);
}

void	Phoenix::takeDamage(int damage)
{
	damage -= 6;
	if (damage <= 0) return;
	this->_hp -= damage;
	this->_hp = this->_hp <= 0 ? 0 : this->_hp;
}
