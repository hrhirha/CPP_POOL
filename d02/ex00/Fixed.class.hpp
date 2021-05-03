#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class	Fixed
{
private:
	int					_fpval;
	static const int	fracBits = 8;

public:
	Fixed();
	Fixed(Fixed const &fp);
	~Fixed();

	Fixed	&operator=(Fixed const &fp);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif