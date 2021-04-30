/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:45:45 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 16:20:22 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}

std::string	ultos16(unsigned long ul)
{
	std::string	digs = "0123456789ABCDEF";
	std::string	str("");

	while (ul > 0)
	{
		str.insert(0, &digs[ul % 16], 1);
		ul /= 16;
	}
	str.insert(0, "0x");
	return (str);
}

std::string	Brain::identify() const
{
	unsigned long	addr = (unsigned long)this;
	std::string		s;

	s = ultos16(addr);
	return (s);
}
