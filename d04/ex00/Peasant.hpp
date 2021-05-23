/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:27:23 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 17:02:31 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEASANT_HPP
# define PEASANT_HPP
# include "Victim.hpp"

class	Peasant : public Victim
{
	private:
		Peasant();
	public:
		Peasant(std::string);
		Peasant(Peasant const &);
		virtual ~Peasant();

		Peasant	&operator =(Peasant const &);

		void	getPolymorphed() const;
};

#endif
