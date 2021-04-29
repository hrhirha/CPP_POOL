/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:10:24 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:04:45 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _type(""), _name("")
{
	std::cout << "constructor Called\n";
}

Zombie::~Zombie()
{
	std::cout << "destructor Called for " << _name <<"\n";
}

std::string	Zombie::getName() const
{
	return this->_name;
}

std::string	Zombie::getType() const
{
	return this->_type;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss...\n";
}
