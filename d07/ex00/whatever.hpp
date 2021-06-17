/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:43:41 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/17 19:52:44 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T c(a);
	a = b, b = c;
}

template <typename T>
T	min(T &a, T &b)
{
	return (a < b ? a : b);	
}

template <typename T>
T	max(T &a, T &b)
{
	return (a > b ? a : b);	
}

#endif
