/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:43:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/20 18:49:05 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main()
{
	Span sp = Span(5);

	sp.addNumber(14);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << '\n'; }

	///////////////////////////////////////////////////////////////////
	std::cout << '\n';

	std::vector<int> vec;
	Span sp1 = Span(100);

	srand(time(0));
	for (int i = 0; i < 100; i++) vec.push_back(rand() % 100000);
	try
	{
		sp1.addNumber(vec.begin(), vec.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	// for (int i = 0; i < 10; i++)
	// 	std::cout << vec[i] << '\n';

	try
	{
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}