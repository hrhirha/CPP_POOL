/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:28:13 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/25 16:42:16 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const &enemy)
{
	*this = enemy;
}

Enemy::~Enemy() {}

Enemy	&Enemy::operator =(Enemy const &enemy)
{
	this->_hp = enemy.getHP();
	this->_type = enemy.getType();
	return (*this);
}

std::string const	Enemy::getType() const
{
	return (this->_type);
}

int	Enemy::getHP() const
{
	return (this->_hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage <= 0) return;
	this->_hp -= damage;
	this->_hp = this->_hp <= 0 ? 0 : this->_hp;
}
