/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:38:49 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:38:50 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class	ScavTrap
{
private:
	int			_hp;
	int			_maxHp;
	int			_ep;
	int			_maxEp;
	int			_lvl;
	std::string	_name;
	int			_meleeAttDam;
	int			_rangedAttDam;
	int			_armorDamRed;

	ScavTrap(void);

public:
	ScavTrap(ScavTrap const &FT);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap	&operator =(ScavTrap const &FT);

	int			getHP(void) const;
	int			getEP(void) const;
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
