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
	Fixed(int const i);
	Fixed(float const f);
	~Fixed();
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
	
	Fixed	&operator=(Fixed const &fp);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif