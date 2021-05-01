/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:41:49 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 17:21:05 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(std::string);
		~Weapon();

		std::string const	&getType() const;
		void				setType(std::string);
};

#endif
