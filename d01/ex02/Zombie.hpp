/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:06:11 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:04:50 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>

class	Zombie
{
	private:
		std::string	_type;
		std::string	_name;

	public:
		Zombie();
		~Zombie();

		std::string	getName() const;
		void		setName(std::string);
		std::string	getType() const;
		void		setType(std::string);
		void		announce(void) const;
};

#endif
