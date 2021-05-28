/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:29:47 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/28 18:33:36 by hrhirha          ###   ########.fr       */
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

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &);
};

#endif
