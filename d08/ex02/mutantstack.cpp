/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:31:41 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/20 15:56:00 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <class T>
MutantStack<T>::MutantStack() {}

template <class T>
MutantStack<T>::MutantStack(MutantStack const &ms)
{
	*this = ms;
}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>	&MutantStack<T>::operator =(MutantStack const &ms)
{
	this->c = ms.c;
	return (*this);
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <class T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <class T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}
