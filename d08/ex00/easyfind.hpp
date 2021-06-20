/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:23:06 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/18 11:59:24 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

class	ElementNotFound : public std::exception
{
	virtual const char *what() const throw() { return ("Element Not Found"); }
};

template <typename T>
int	easyfind(T t, int d)
{
	if (std::find(t.begin(), t.end(), d) == t.end())
		throw ElementNotFound();
	return (*(std::find(t.begin(), t.end(), d)));
}

#endif
