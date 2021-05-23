/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 10:26:58 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/08 10:27:00 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
private:
	NinjaTrap(void);

public:
	NinjaTrap(NinjaTrap const &NT);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	NinjaTrap	&operator =(NinjaTrap const &NT);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		ninjaShoebox(NinjaTrap &NT);
	void		ninjaShoebox(FragTrap &FT);
	void		ninjaShoebox(ScavTrap &ST);
};

#endif
