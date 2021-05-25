/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:06:09 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:37:26 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &pr);
		virtual ~PlasmaRifle();

		PlasmaRifle	&operator =(PlasmaRifle const &pr);

		void	attack() const;
};

#endif
