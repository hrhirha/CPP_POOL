/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:10:37 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 16:33:45 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMIINATOR_HPP
# define ASSAULTTERMIINATOR_HPP
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &);
		virtual ~AssaultTerminator();

		AssaultTerminator	&operator =(AssaultTerminator const &);

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
