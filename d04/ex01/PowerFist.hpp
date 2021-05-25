/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:42:54 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:44:28 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const &pf);
		virtual ~PowerFist();

		PowerFist	&operator =(PowerFist const &pf);

		void	attack() const;
};

#endif
