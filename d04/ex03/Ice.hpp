/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:29:47 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 19:03:55 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &);
		virtual ~Ice();

		Ice	&operator =(Ice const &);

		AMateria	*clone() const;
		void		use(ICharacter &);
};

#endif
