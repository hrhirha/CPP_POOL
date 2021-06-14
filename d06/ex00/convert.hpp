/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:30:11 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/14 16:43:45 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <cctype>
# include <string>

struct	dt
{
	int			c;
	long long	i;
	double		f;
	double		d;
};

bool	isChar(std::string s);
bool	isInt(std::string s);
bool	isFloat(std::string s);
bool	isDouble(std::string s);

void	convertChar(std::string s, dt &dt);
void	convertInt(std::string s, dt &dt);
void	convertFloat(std::string s, dt &dt);
void	convertDouble(std::string s, dt &dt);

#endif
