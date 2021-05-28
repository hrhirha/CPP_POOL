/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:18:10 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 16:33:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

// struct	Units
// {
// 	ISpaceMarine	*sm;
// 	Units			*next;
// };

class	Squad : public ISquad
{
	private:
		int		_count;
		Units	*_units;
	public:
		Squad();
		Squad(Squad const &);
		virtual ~Squad();

		Squad	&operator =(Squad const &);

		int				getCount() const;
		ISpaceMarine	*getUnit(int) const;
		Units			*getU() const; // Test
		int				push(ISpaceMarine*);
};

#endif