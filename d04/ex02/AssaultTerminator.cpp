/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:11:18 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 16:43:46 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &tm)
{
	*this = tm;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator =(AssaultTerminator const &)
{
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine *ism = new AssaultTerminator;
	
	*ism = *this;
	return (ism);
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}
