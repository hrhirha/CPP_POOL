/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:12:58 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/17 20:39:06 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main()
{
	Array<int>			arr(8);
	Array<int> const	arr2(5);

	for (unsigned int i = 0; i < arr.size(); i++) arr[i] = i+1;
	for (unsigned int i = 0; i < arr2.size(); i++) arr2[i] = i+10;

	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << '\n';

	for (unsigned int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << '\n';

	try { std::cout << arr[8] << '\n'; }
	catch (std::exception &e) { std::cout << e.what() << '\n'; }

	// try { std::cout << arr2[0] << '\n'; }
	// catch (std::exception &e) { std::cout << e.what() << '\n'; }

	return (0);
}