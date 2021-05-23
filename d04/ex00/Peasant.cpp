/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:28:37 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 16:30:51 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

Peasant::Peasant() {}

Peasant::Peasant(std::string name): Victim(name)
{
	std::cout << "Well well." << std::endl;
}

Peasant::Peasant(Peasant const &Peasant)
{
	*this = Peasant;
}

Peasant::~Peasant()
{
	std::cout << "Khkhkhkhkh..." << std::endl;
}

Peasant	&Peasant::operator =(Peasant const &peasant)
{
	this->_name = peasant.getName();
	return (*this);
}

void	Peasant::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into an otter!"
		<< std::endl;
}
