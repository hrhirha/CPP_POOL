/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:26:44 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/05 13:26:59 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class	FragTrap
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
	FragTrap(void);

public:
	FragTrap(FragTrap const &FT);
	FragTrap(std::string name);
	~FragTrap(void);

	FragTrap	&operator =(FragTrap const &FT);

	int			getHP(void) const;
	int			getEP(void) const;
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
