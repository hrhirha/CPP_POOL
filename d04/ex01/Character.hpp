/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:58:10 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:34:42 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;

		Character();
	public:
		Character(std::string const & name);
		Character(Character const &ch);
		~Character();

		Character			&operator =(Character const &ch);

		std::string const	getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;

		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);
};

std::ostream	&operator <<(std::ostream &o, Character &ch);

#endif
