/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:12:57 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/04 10:12:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

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
	
	Fixed	&operator =(Fixed const &fp);

	bool	operator >(Fixed const &fp) const;
	bool	operator <(Fixed const &fp) const;
	bool	operator >=(Fixed const &fp) const;
	bool	operator <=(Fixed const &fp) const;
	bool	operator ==(Fixed const &fp) const;
	bool	operator !=(Fixed const &fp) const;

	Fixed	operator +(Fixed const &fp);
	Fixed	operator -(Fixed const &fp);
	Fixed	operator *(Fixed const &fp);
	Fixed	operator /(Fixed const &fp);

	Fixed	operator ++();
	Fixed	operator ++(int);
	Fixed	operator --();
	Fixed	operator --(int);

	static Fixed		&min(Fixed &fp1, Fixed &fp2);
	static const Fixed	&min(Fixed const &fp1, Fixed const &fp2);
	static Fixed		&max(Fixed &fp1, Fixed &fp2);
	static const Fixed	&max(Fixed const &fp1, Fixed const &fp2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif
