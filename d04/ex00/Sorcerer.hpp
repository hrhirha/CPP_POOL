/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:26:45 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 15:27:55 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		
		Sorcerer();
	public:
		Sorcerer(std::string, std::string);
		Sorcerer(Sorcerer const &);
		~Sorcerer();

		std::string	getName() const;
		std::string	getTitle() const;

		Sorcerer	&operator =(Sorcerer const &);

		void		polymorph(Victim const &) const;
};

std::ostream	&operator <<(std::ostream &, Sorcerer const &);

#endif
