/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:56:33 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/29 19:29:47 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_knownMaterias = new AMateria*[4];

	for (size_t i = 0; i < 4; i++)
		this->_knownMaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		delete this->_knownMaterias[i];
	delete [] this->_knownMaterias;
}

MateriaSource	&MateriaSource::operator =(MateriaSource const &src)
{
	std::cout << "Asssignation Operator\n";
	AMateria const *nMat;

	for (size_t i = 0; i < 4; i++)
		delete this->_knownMaterias[i];
	delete [] this->_knownMaterias;

	this->_knownMaterias = new AMateria*[4];

	for (size_t i = 0; i < 4; i++)
	{
		if ((nMat = src.getKnownMateria(i)) == NULL)
			this->_knownMaterias[i] = NULL;
		else
		{
			this->_knownMaterias[i]->setType(nMat->getType());
			this->_knownMaterias[i]->setXP(nMat->getXP());
		}
	}
	return (*this);
}

AMateria const		*MateriaSource::getKnownMateria(int i) const
{
	return (this->_knownMaterias[i]);
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!_knownMaterias[i])
		{
			_knownMaterias[i] = mat;
			return ;
		}
	}
	std::cout << "Source is Full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_knownMaterias[i] && _knownMaterias[i]->getType() == type)
			return (_knownMaterias[i]->clone());
	}
	return (NULL);
}
