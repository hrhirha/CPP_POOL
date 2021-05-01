/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:13:34 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 16:10:14 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string	types[4] = {"Pathogen", "Cursed", "Pharmaceutical", "Chemical"};
	std::string	names[11] = {"John", "Jane", "Kurt", "Reade", "Rich", "Zapata",
							"Albert", "patterson", "White", "Liz", "Chriss"};
	int	index;

	this->_n = N;
	srand(time(0));
	this->_z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		index = rand() % 11;
		_z[i].setName(names[index]);
		index = rand() % 4;
		_z[i].setType(types[index]);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete []this->_z;
}

Zombie	*ZombieHorde::getZombie() const
{
	return (_z);
}

void	ZombieHorde::announce() const
{
	Zombie		*z = this->getZombie();

	for (int i = 0; i < this->_n; i++)
	{
		z[i].announce();
	}
}
