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

Pony::Pony(std::string s): _color(""), _height(0)
{
	std::cout << "Pony is Born on the " << s <<"\n";
}

Pony::~Pony()
{
	std::cout << "Pony Died\n";
}

std::string Pony::getColor(void) const
{
	return this->_color;
}

void	Pony::setColor(std::string col)
{
	this->_color = col;
}

int	Pony::getHeight(void) const
{
	return this->_height;
}

void	Pony::setHeight(int h)
{
	this->_height = h;
}

void	Pony::saysHi(std::string s)
{
	std::cout << "The " << this->_color << " Pony with a height of " << this->_height
		<< "cm, says Hi " << s << std::endl;
}
