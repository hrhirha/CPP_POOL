/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:16:20 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 15:48:41 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}

AMateria::AMateria(AMateria const &aMat)
{
	*this = aMat;
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria	&AMateria::operator =(AMateria const &aMat)
{
	this->_xp = aMat.getXP();
	this->_type = aMat.getType();
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int	AMateria::getXP() const
{
	return (_xp);
}

void	AMateria::setType(std::string const &type)
{
	this->_type = type;
}

void	AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void	AMateria::use()
{
	this->_xp += 10;
}

void	AMateria::use(ICharacter &ch) {(void)ch;}
