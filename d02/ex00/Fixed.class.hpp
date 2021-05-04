/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:12:22 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/04 10:12:25 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
