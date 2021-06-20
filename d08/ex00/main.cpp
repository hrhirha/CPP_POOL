/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:35:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/18 11:59:38 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	try
	{
		std::cout << easyfind(v, 3) << '\n';
		std::cout << easyfind(v, 10) << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
