/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:01:23 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 15:53:33 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <iostream>

struct Data
{
	std::string	s1;
	int			num;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif
