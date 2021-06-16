/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:50:50 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 16:57:38 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	*ptr[3] = {new A, new B, new C};
	int		i = rand() % 3;
	
	for (int j = 0; j < 3; j++)
	{
		if (j != i) delete ptr[j], ptr[j] = nullptr;
	}
	return (ptr[i]);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p)) std::cout << "A\n";
	else if (dynamic_cast<B *>(p)) std::cout << "B\n";
	else if (dynamic_cast<C *>(p)) std::cout << "C\n";
}

void	identify_from_reference( Base &p)
{

	if (dynamic_cast<A *>(&p)) std::cout << "A\n";
	else if (dynamic_cast<B *>(&p)) std::cout << "B\n";
	else if (dynamic_cast<C *>(&p)) std::cout << "C\n";
}
