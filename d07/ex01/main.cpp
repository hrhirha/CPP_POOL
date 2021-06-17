/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:07:30 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/17 20:02:19 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <class T>
void	print(T i)
{
	std::cout << i << ' ';
}

int	main(void)
{
	int			a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	float		b[] = {1.12, 2.66, 3.088, 4.345, 5.34543, 6.123, 7.8789, 8.19, 9.0};
	std::string	s[] = {"aaaa", "bbbb", "cccc", "dddd"};

	::iter(a, 9, print); std::cout << '\n';
	::iter(b, 9, print); std::cout << '\n';
	::iter(s, 4, print); std::cout << '\n';
}
