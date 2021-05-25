/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:23:46 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 15:30:46 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class	Enemy
{
	protected:
		int			_hp;
		std::string	_type;

		Enemy();
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &enemy);
		virtual	~Enemy();

		Enemy	&operator =(Enemy const &enemy);

		std::string const	getType() const;
		int					getHP() const;

		virtual void	takeDamage(int);
};

#endif
