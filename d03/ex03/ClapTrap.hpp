/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:39:41 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:39:42 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
protected:
	int			_hp;
	int			_maxHp;
	int			_ep;
	int			_maxEp;
	int			_lvl;
	std::string	_name;
	int			_meleeAttDam;
	int			_rangedAttDam;
	int			_armorDamRed;

	ClapTrap(void);
	ClapTrap(int hp, int maxHp, int ep, int maxEp, int lvl,
		std::string name, int meleeAttDam, int rangedAttDam, int armorDamRed);

public:
	ClapTrap(ClapTrap const &CT);
	~ClapTrap(void);

	ClapTrap	&operator =(ClapTrap const &CT);

	int			getHP(void) const;
	int			getEP(void) const;
	std::string	getName(void) const;
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
