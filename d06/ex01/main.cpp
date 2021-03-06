/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:09:18 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 16:02:06 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main()
{
	void	*raw;
	Data	*data;
	
	srand(time(nullptr));
	raw = serialize();
	data = deserialize(raw);

	std::cout << "s1  = "<< data->s1 << '\n';
	std::cout << "num = "<< data->num << '\n';
	std::cout << "s2  = "<< data->s2 << '\n';

	delete reinterpret_cast<char *>(raw);
	delete data;
}
