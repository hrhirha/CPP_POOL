/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:52:06 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 15:10:13 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tm)
{
	*this = tm;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine	&TacticalMarine::operator =(TacticalMarine const &)
{
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine *ism = new TacticalMarine;
	
	*ism = *this;
	return (ism);
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout <<  "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}
