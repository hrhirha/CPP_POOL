/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:22:24 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 19:29:21 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(char  const *name) : _name(name)
{
	std::cout << this->_name << "'s Constructor\n";
	this->_materias = new AMateria*[4];

	for (size_t i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(Character const &ch)
{
	std::cout << this->_name << "'s Copy Constructor\n";
	*this = ch;
}

Character::~Character()
{
	std::cout << this->_name << "'s Destructor\n";
	for (size_t i = 0; i < 4; i++)
		delete this->_materias[i];
	delete [] this->_materias;
}

Character	&Character::operator =(Character const &ch)
{
	std::cout << this->_name << "'s Asssignation Operator\n";
	AMateria const *nMat;

	if (this->_materias)
	{
		for (size_t i = 0; i < 4; i++)
			delete this->_materias[i];
		delete [] this->_materias;
	}

	this->_materias = new AMateria*[4];

	for (size_t i = 0; i < 4; i++)
	{
		if ((nMat = ch.getMateria(i)) == NULL)
			this->_materias[i] = NULL;
		else
		{
			this->_materias[i]->setType(nMat->getType());
			this->_materias[i]->setXP(nMat->getXP());
		}
	}
	this->_name = ch.getName();
	return (*this);
}

std::string	const	&Character::getName() const
{
	return (this->_name);
}

AMateria const		*Character::getMateria(int i) const
{
	if (i < 0 || i > 3) return (NULL);
	return (this->_materias[i]);
}

void	Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is Full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) return ;
	this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3) return ;
	if (this->_materias[idx])
		this->_materias[idx]->use(target);
}
