/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:09:32 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/08 12:09:33 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
private:
	SuperTrap(void);

public:
	SuperTrap(SuperTrap const &SuT);
	SuperTrap(std::string name);
	~SuperTrap(void);

	SuperTrap	&operator =(SuperTrap const &SuT);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
};

#endif
