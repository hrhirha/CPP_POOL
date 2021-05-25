/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:40:55 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:45:40 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &sm);
		virtual ~SuperMutant();

		SuperMutant	&operator =(SuperMutant const &sm);

		void	takeDamage(int);
};

#endif
