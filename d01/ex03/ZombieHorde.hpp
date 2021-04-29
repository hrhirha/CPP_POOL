/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:10:25 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 16:10:18 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieHorde
{
	Zombie	*_z;
	public:
		ZombieHorde(int);
		~ZombieHorde();

		Zombie	*getZombie() const;
		void	announce() const;
};
