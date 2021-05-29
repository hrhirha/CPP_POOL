/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bazooka.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:08:23 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 18:51:12 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BAZOOKA_HPP
# define BAZOOKA_HPP
# include "AWeapon.hpp"

class	Bazooka : public AWeapon
{
	public:
		Bazooka();
		Bazooka(Bazooka const &ba);
		virtual ~Bazooka();

		Bazooka	&operator =(Bazooka const &ba);

		void	attack() const;
};

#endif
