/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:12:46 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/04 10:12:47 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(): _fpval(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpval = i << Fixed::fracBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	float n;

	n = f * (1 << Fixed::fracBits);
	this->_fpval = (int)roundf(n);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpval);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpval = raw;
}

int	Fixed::toInt() const
{
	return (this->_fpval / (1 << Fixed::fracBits));
}

float Fixed::toFloat() const
{
	float flt;

	flt = (float)this->_fpval / (1 << Fixed::fracBits);
	return (flt);
}

Fixed	&Fixed::operator=(Fixed const &fp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpval = fp.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fp)
{
	o << fp.toFloat();
	return (o);
}
