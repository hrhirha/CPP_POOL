/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:18:13 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/28 18:08:10 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0)
{
	std::cout << "Default Constructor\n";
	this->_units = new Units;

	this->_units->sm = NULL;
	this->_units->next = NULL;
}

Squad::Squad(Squad const &sq)
{
	std::cout << "Copy Constructor\n";
	*this = sq;
}

Squad::~Squad()
{
	Units *tmp;

	while (this->_units)
	{
		tmp = this->_units->next;
		delete this->_units->sm;
		delete this->_units;
		this->_units = tmp;
	}
	std::cout << "Destructor\n";
}

Squad	&Squad::operator =(Squad const &sq)
{
	std::cout << "Assignation operator\n";
	Units	*tmp = sq._units;

	while (this->_units)
	{
		tmp = this->_units->next;
		delete this->_units->sm;
		delete this->_units;
		this->_units = tmp;
	}
	this->_units = new Units;
	this->_units->sm = NULL;
	this->_units->next = NULL;
	while (tmp)
	{
		this->push(tmp->sm->clone());
		tmp = tmp->next;
	}
	return (*this);
}

int	Squad::getCount() const
{
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int i) const
{
	Units *tmp;
	int j(0);

	if (i >= this->_count) return (NULL);
	tmp = this->_units;
	while (tmp)
	{
		if (j == i) return (tmp->sm);
		j++;
		tmp = tmp->next;
	}
	return (NULL);
}

int	Squad::push(ISpaceMarine *sm)
{
	Units	*new_node = new Units;
	Units	*tmp = this->_units;

	if (!sm) return (this->_count);
	if (!this->_units->sm)
	{
		this->_units->sm = sm;
		delete new_node;
		return (++_count);
	}
	while (tmp)
	{
		if (tmp->sm == sm) return (this->_count);
		tmp = tmp->next;
	}
	tmp = this->_units;
	while (tmp->next) tmp = tmp->next;
	new_node->sm = sm;
	new_node->next = NULL;
	tmp->next = new_node;
	return (++_count);
}
