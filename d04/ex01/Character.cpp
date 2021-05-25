/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:04:24 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:49:53 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) :
	_name(name), _ap(40), _weapon(NULL) {}

Character::Character(Character const &ch)
{
	*this = ch;
}

Character::~Character() {}

Character	&Character::operator =(Character const &ch)
{
	this->_name = ch.getName();
	this->_ap = ch.getAP();
	this->_weapon = ch.getWeapon();
	return (*this);
}

std::string	const	Character::getName() const
{
	return (this->_name);
}

int	Character::getAP() const
{
	return (this->_ap);
}

AWeapon	*Character::getWeapon() const
{
	return (this->_weapon);
}

void	Character::recoverAP()
{
	if (this->_ap == 40) return;
	this->_ap += 10;
	this->_ap = this->_ap >= 40 ? 40 : this->_ap;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (!this->_weapon) return;
	if (this->_ap < this->_weapon->getAPCost()) return;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
		<< this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (enemy->getHP() == 0) delete enemy;
}

std::ostream	&operator <<(std::ostream &o, Character &ch)
{
	o << ch.getName() << " has " << ch.getAP() << " AP and ";
	if (!ch.getWeapon()) o << "is unarmed" << std::endl;
	else o << "wields a " << ch.getWeapon()->getName() << std::endl;
	return (o);
}
