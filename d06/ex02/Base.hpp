/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:08:21 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 16:55:17 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
	public:
		virtual ~Base();
};

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference( Base &p);

#endif
