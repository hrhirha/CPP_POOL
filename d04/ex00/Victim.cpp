/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:09:17 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 15:27:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;
}

Victim::Victim(Victim const &vic)
{
	*this = vic;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!"
		<< std::endl;
}

std::string	Victim::getName() const
{
	return (this->_name);
}

Victim	&Victim::operator =(Victim const &vic)
{
	this->_name = vic.getName();
	return (*this);
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!"
		<< std::endl;
}

std::ostream	&operator <<(std::ostream &o, Victim const &vic)
{
	o << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (o);
}
