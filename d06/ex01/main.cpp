/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:09:18 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/14 20:00:38 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	s1;
	int			num;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

int	main()
{
	void	*raw;
	Data	*data;
	
	srand(time(nullptr));
	raw = serialize();
	data = deserialize(raw);

	std::cout << '\n';
	std::cout << data->s1 << '\n';
	std::cout << data->num << '\n';
	std::cout << data->s2 << '\n';

	delete reinterpret_cast<std::string *>(raw);
	delete data;
}

void	*serialize(void)
{
	std::string alphas = "abcdefghijklmnopqrstuvwxyz";
	std::string	digits = "0123456789";
	std::string	*ptr = new std::string;
	Data		*data = new Data;
	
	for (int i = 0; i < 10; i++)
		data->s1 += alphas[rand() % 26];
	data->num = 0;
	for (int i = 0; i < 5; i++)
		data->num = data->num * 10 + (digits[rand() % 10] - 48);
	for (int i = 0; i < 10; i++)
		data->s2 += alphas[rand() % 26];
	
	*ptr = data->s1 + std::to_string(data->num) + data->s2;

	std::cout << data->s1 << '\n';
	std::cout << data->num << '\n';
	std::cout << data->s2 << '\n';
	return (reinterpret_cast<void *>(ptr));
}

Data	*deserialize(void * raw)
{
	Data		*data = new Data;
	std::string	ptr = *(reinterpret_cast<std::string *>(raw));

	int i = 0;
	for (; i < 10; i++)
		data->s1 += ptr[i];
	data->num = 0;
	for (; i < 15; i++)
		data->num = data->num * 10 + (ptr[i] - 48);
	for (; i < 25; i++)
		data->s2 += ptr[i];
	return (data);
}
