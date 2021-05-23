/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:59:44 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 16:19:28 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &peon)
{
	*this = peon;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator =(Peon const &peon)
{
	this->_name = peon.getName();
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!"
		<< std::endl;
}
