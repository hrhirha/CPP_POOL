/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 08:11:02 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 08:51:29 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony
{
	private:
		std::string	_color;
		int			_height;

	public:
		Pony(std::string s);
		~Pony();

		std::string	getColor(void) const;
		void		setColor(std::string col);
		int			getHeight(void) const;
		void		setHeight(int h);
		void		saysHi(std::string s);
};

#endif
