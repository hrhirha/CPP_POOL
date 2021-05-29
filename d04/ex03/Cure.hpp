/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:33:31 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 19:04:12 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &);
		virtual ~Cure();

		Cure	&operator =(Cure const &);

		AMateria	*clone() const;
		void		use(ICharacter &);
};

#endif
