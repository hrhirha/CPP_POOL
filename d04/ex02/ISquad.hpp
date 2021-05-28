/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:37:24 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/26 14:41:53 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

struct	Units
{
	ISpaceMarine	*sm;
	Units			*next;
};

class	ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual Units			*getU() const = 0; // Test
		virtual int push(ISpaceMarine*) = 0;
};

#endif
