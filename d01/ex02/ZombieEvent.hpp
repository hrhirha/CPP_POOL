/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:30:05 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:04:51 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(Zombie &z);
		Zombie	*newZombie(std::string name);
};
