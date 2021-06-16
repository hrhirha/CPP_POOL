/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:52:35 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 16:03:43 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void)
{
	char	*ptr = new char[20];
	int		i(0);

	for (; i < 7; i++) ptr[i] = (char)(32 + (rand() % 93));
	ptr[i++] = '\0';
	*(reinterpret_cast<int *>(&ptr[i])) = rand() % 1000000;
	i += 4;
	for (; i < 19; i++) ptr[i] = (char)(32 + (rand() % 93));
	ptr[i] = '\0';
	return (reinterpret_cast<void *>(ptr));
}

Data	*deserialize(void * raw)
{
	Data	*data = new Data;
	char	*ptr = reinterpret_cast<char *>(raw);

	data->s1 = ptr;
	data->num = *(reinterpret_cast<int *>(&ptr[8]));
	data->s2 = &ptr[12];
	return (data);
}
