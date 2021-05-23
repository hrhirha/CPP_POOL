/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:50:46 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 16:21:17 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title):
	_name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sor)
{
	*this = sor;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

std::string	Sorcerer::getName() const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->_title);
}

Sorcerer	&Sorcerer::operator =(Sorcerer const &sor)
{
	this->_name = sor.getName();
	this->_title = sor.getTitle();
	return (*this);
}

void	Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

std::ostream	&operator <<(std::ostream &o, Sorcerer const &sor)
{
	o << "I am " << sor.getName() << ", " << sor.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (o);
}
