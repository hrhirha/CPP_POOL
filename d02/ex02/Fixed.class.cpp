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
}

Fixed::Fixed(Fixed const &fp)
{
	*this = fp;
}

Fixed::Fixed(int const i)
{
	this->_fpval = i << Fixed::fracBits;
}

Fixed::Fixed(float const f)
{
	float n;

	n = f * (1 << Fixed::fracBits);
	this->_fpval = (int)roundf(n);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_fpval);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpval = raw;
}

int	Fixed::toInt() const
{
	return (this->_fpval >> (Fixed::fracBits));
}

float Fixed::toFloat() const
{
	float flt;

	flt = (float)this->_fpval / (1 << Fixed::fracBits);
	return (flt);
}

// Assignation operator

Fixed	&Fixed::operator=(Fixed const &fp)
{
	this->_fpval = fp.getRawBits();
	return (*this);
}

// Comparison operators

bool	Fixed::operator>(Fixed const &fp) const
{
	return (this->_fpval > fp.getRawBits() ? true : false);
}

bool	Fixed::operator<(Fixed const &fp) const
{
	return (this->_fpval < fp.getRawBits() ? true : false);
}

bool	Fixed::operator>=(Fixed const &fp) const
{
	return (this->_fpval >= fp.getRawBits() ? true : false);
}

bool	Fixed::operator<=(Fixed const &fp) const
{
	return (this->_fpval <= fp.getRawBits() ? true : false);
}

bool	Fixed::operator==(Fixed const &fp) const
{
	return (this->_fpval == fp.getRawBits() ? true : false);
}

bool	Fixed::operator!=(Fixed const &fp) const
{
	return (this->_fpval != fp.getRawBits() ? true : false);
}

// Arithmitic opperators

Fixed	Fixed::operator+(Fixed const &fp)
{
	Fixed f(this->toFloat() + fp.toFloat());
	return (f);
}

Fixed	Fixed::operator-(Fixed const &fp)
{
	Fixed f(this->toFloat() - fp.toFloat());
	return (f);
}

Fixed	Fixed::operator*(Fixed const &fp)
{
	Fixed f(this->toFloat() * fp.toFloat());
	return (f);
}

Fixed	Fixed::operator/(Fixed const &fp)
{
	Fixed f(this->toFloat() / fp.toFloat());
	return (f);
}

// Increment and decrement oprators

Fixed	Fixed::operator ++()
{
	++this->_fpval;
	return (*this);
}

Fixed	Fixed::operator ++(int)
{
	Fixed f(this->toFloat());
	++this->_fpval;
	return (f);
}

Fixed	Fixed::operator --()
{
	--this->_fpval;
	return (*this);
}

Fixed	Fixed::operator --(int)
{
	Fixed f(this->toFloat());
	--this->_fpval;
	return (f);
}

// min/max

Fixed	&Fixed::min(Fixed &fp1, Fixed &fp2)
{
	return (fp1 <= fp2 ? fp1 : fp2);
}

const Fixed	&Fixed::min(Fixed const &fp1, Fixed const &fp2)
{
	return (fp1 <= fp2 ? fp1 : fp2);
}

Fixed	&Fixed::max(Fixed &fp1, Fixed &fp2)
{
	return (fp1 >= fp2 ? fp1 : fp2);
}

const Fixed	&Fixed::max(Fixed const &fp1, Fixed const &fp2)
{
	return (fp1 >= fp2 ? fp1 : fp2);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fp)
{
	o << fp.toFloat();
	return (o);
}