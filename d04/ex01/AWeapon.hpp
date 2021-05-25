/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:45:52 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 12:35:10 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class	AWeapon
{
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;

		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &weapon);
		virtual	~AWeapon();

		AWeapon	&operator =(AWeapon const &weapon);

		std::string const	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
};

#endif