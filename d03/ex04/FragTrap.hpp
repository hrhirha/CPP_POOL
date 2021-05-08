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
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
private:
	FragTrap(void);

public:
	FragTrap(FragTrap const &FT);
	FragTrap(std::string name);
	~FragTrap(void);

	FragTrap	&operator =(FragTrap const &FT);

	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
