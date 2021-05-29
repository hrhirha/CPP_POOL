/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:18:13 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 18:43:41 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0)
{
	this->_units = NULL;
}

Squad::Squad(Squad const &sq)
{
	this->_units = NULL;
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
}

Squad	&Squad::operator =(Squad const &sq)
{
	Units const	*tmp;

	while (this->_units)
	{
		tmp = this->_units->next;
		delete this->_units->sm;
		delete this->_units;
		this->_units = (Units *)tmp;
	}
	this->_units = NULL;
	this->_count = 0;
	tmp = sq.getUnits();
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

Units const	*Squad::getUnits() const
{
	return (this->_units);
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
	if (!this->_units)
	{
		new_node->sm = sm;
		new_node->next = NULL;
		this->_units = new_node;
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
