/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phoenix.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:53:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:54:19 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHOENIX_HPP
# define PHOENIX_HPP
# include "Enemy.hpp"

class	Phoenix : public Enemy
{
	public:
		Phoenix();
		Phoenix(Phoenix const &p);
		virtual ~Phoenix();

		Phoenix	&operator =(Phoenix const &p);

		void	takeDamage(int);
};

#endif
