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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &fp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpval = fp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpval);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	this->_fpval = raw;
}
