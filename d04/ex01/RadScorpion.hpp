/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:53:40 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:42:37 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &rs);
		virtual ~RadScorpion();

		RadScorpion	&operator =(RadScorpion const &rs);
};

#endif
