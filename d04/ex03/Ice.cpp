/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:33:50 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/28 18:55:34 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &ice)
{
	*this = ice;
}

Ice::~Ice() {}

Ice	&Ice::operator =(Ice const &ice)
{
	this->_xp = ice.getXP();
	this->_type = ice.getXP();
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*newMat = new Ice;

	newMat->setType(this->_type);
	newMat->setXP(this->_xp);
	return (newMat);
}

void	Ice::use(ICharacter &ch)
{
	std::cout << "* shoots an ice bolt at " << ch.getName()
		<< " *" << std::endl;
}
