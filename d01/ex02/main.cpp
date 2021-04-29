/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:20:44 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:04:52 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	randomChump(void)
{
	ZombieEvent	ze;
	Zombie	*z;
	std::string	names[6] = {"john", "jane", "kurt", "reade", "rich", "zapata"};
	int	i;

	i = rand() % 6;
	z = ze.newZombie(names[i]);
	z->announce();
	delete z;
}

int	main(void)
{
	ZombieEvent	ze;
	Zombie		z;

	srand(time(0));
	ze.setZombieType(z);
	z.setName("albert");
	z.announce();
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		randomChump();
	}
	std::cout << "\n";
}
