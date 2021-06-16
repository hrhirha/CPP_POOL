/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:43:41 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 18:55:10 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T c;
	c = a, a = b, b = c;
}

template <typename T>
T	min(T const &a, T const &b)
{
	return (a < b ? a : b);	
}

template <typename T>
T	max(T const &a, T const &b)
{
	return (a > b ? a : b);	
}

#endif
