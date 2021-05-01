/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:02:18 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/30 17:21:08 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w): _name(n), _weapon(&w)
{}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his "
		<< (*this->_weapon).getType() << std::endl;
}
