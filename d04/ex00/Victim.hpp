/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:51:30 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 17:15:20 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class	Victim
{
	protected:
		std::string	_name;
		
		Victim();
	public:
		Victim(std::string);
		Victim(Victim const &);
		virtual ~Victim();

		std::string	getName() const;

		Victim	&operator =(Victim const &);

		virtual void	getPolymorphed() const;
};

std::ostream	&operator <<(std::ostream &, Victim const &);

#endif