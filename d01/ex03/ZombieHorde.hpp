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

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		int		_n;
		Zombie	*_z;
	public:
		ZombieHorde(int);
		~ZombieHorde();

		Zombie	*getZombie() const;
		void	announce() const;
};

#endif
