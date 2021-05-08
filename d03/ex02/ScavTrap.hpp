/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:39:15 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/06 13:39:17 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
private:
	ScavTrap(void);

public:
	ScavTrap(ScavTrap const &ST);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap	&operator =(ScavTrap const &ST);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		challengeNewcomer(void);
};

#endif
