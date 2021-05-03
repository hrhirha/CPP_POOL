#include "Fixed.class.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const	b(10);
	Fixed	c;

	c = b;
	
	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toInt() << std::endl;
}