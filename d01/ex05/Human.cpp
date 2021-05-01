/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:50:58 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 16:20:24 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	std::cout << "Human Constructor Called\n";
}

Human::~Human()
{
	std::cout << "Human Destructor Called\n";
}

std::string	Human::identify() const
{
	return (this->_brain.identify());
}

const Brain	&Human::getBrain() const
{
	return (this->_brain);
}
