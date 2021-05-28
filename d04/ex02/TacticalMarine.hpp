/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:43:02 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 16:33:36 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &);
		virtual ~TacticalMarine();

		TacticalMarine	&operator =(TacticalMarine const &);

		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
