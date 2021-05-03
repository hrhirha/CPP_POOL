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

Fixed::Fixed(int const i): _fpval(i) {}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

int	Fixed::toInt() const
{
	return ((int)this->_fpval);
}

Fixed	&Fixed::operator=(Fixed const &fp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpval = fp.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fp)
{
	o << fp.getRawBits();
	return (o);
}
