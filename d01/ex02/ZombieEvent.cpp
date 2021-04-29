/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:30:39 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:04:39 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setZombieType(Zombie &z)
{
	std::string	types[3] = {"Pathogen", "Cursed", "Pharmaceutical"};
	int	i;

	i = rand() % 3;
	z.setType(types[i]);
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z;

	z = new Zombie;
	z->setName(name);
	this->setZombieType(*z);

	return (z);
}
