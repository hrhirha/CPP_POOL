/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 08:15:38 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 08:51:39 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string s): color(""), height(0)
{
	std::cout << "Pony is Born on the " << s <<"\n";
}

Pony::~Pony()
{
	std::cout << "Pony Died\n";
}

std::string Pony::getColor(void) const
{
	return color;
}

void	Pony::setColor(std::string col)
{
	color = col;
}

int	Pony::getHeight(void) const
{
	return height;
}

void	Pony::setHeight(int h)
{
	height = h;
}

void	Pony::saysHi(std::string s)
{
	std::cout << "The " << color << " Pony with a height of " << height
		<< "cm, says Hi " << s << std::endl;
}
