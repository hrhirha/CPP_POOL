/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:34:29 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 14:36:52 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &cure)
{
	*this = cure;
}

Cure::~Cure() {}

Cure	&Cure::operator =(Cure const &cure)
{
	this->_xp = cure.getXP();
	this->_type = cure.getXP();
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*newMat = new Cure;

	newMat->setType(this->_type);
	newMat->setXP(this->_xp);
	return (newMat);
}

void	Cure::use(ICharacter &ch)
{
	std::cout << "* heals " << ch.getName()
		<< "’s wounds" << std::endl;
}
