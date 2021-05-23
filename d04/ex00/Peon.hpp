/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:53:28 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/23 17:04:40 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class	Peon : public Victim
{
	private:
		Peon();
	public:
		Peon(std::string);
		Peon(Peon const &);
		virtual ~Peon();

		Peon	&operator =(Peon const &);

		void	getPolymorphed() const;
};

#endif
