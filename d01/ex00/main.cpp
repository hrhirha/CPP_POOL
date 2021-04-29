/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 08:17:30 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 08:51:31 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	stackPony("STACK");

	stackPony.setColor("Black");
	stackPony.setHeight(140);

	stackPony.saysHi("from STACK");
}

void	ponyOnTheHeap(void)
{
	Pony	*heapPony;

	heapPony = new Pony("HEAP");
	heapPony->setColor("White");
	heapPony->setHeight(137);

	heapPony->saysHi("from HEAP");
	delete heapPony;
}

int	main(void)
{
	ponyOnTheStack();
	std::cout << "\n";
	ponyOnTheHeap();
}
