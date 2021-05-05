#include "Fixed.class.hpp"
#include <bitset>

int	main(void)
{
	Fixed	a;
	Fixed	b(1337);
	Fixed	c(37);
	Fixed	d(Fixed(5.05f) * Fixed(2));

	// a = Fixed(20.2f);

	std::cout << "a   = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;

	std::cout << "\n";
	
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "\n";

	std::cout << "b + c = " << b + c << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	
	std::cout << "\n";
	
	std::cout << "d = " << d <<std::endl;

	std::cout << "\n";
	
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;
	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
}