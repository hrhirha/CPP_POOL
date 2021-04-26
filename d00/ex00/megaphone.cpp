/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:25:31 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/19 09:25:34 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(int ac, char **av)
{
	for (int j = 1; j < ac; j++)
	{
		for (int i = 0; av[j][i]; i++)
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z') av[j][i] -= 32;
		}
		std::cout << av[j] << " ";
	}
	std::cout << "\n";
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(ac, av);
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
