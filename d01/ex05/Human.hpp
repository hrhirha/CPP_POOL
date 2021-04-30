/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:49:14 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 16:20:25 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


class	Human
{
	const Brain	brain;

	public:
		Human();
		~Human();

		std::string	identify() const;
		const Brain	&getBrain() const;
};
