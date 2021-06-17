/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:56:01 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/17 20:44:08 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class	Array
{
	T				*_arr;
	unsigned int	_n;

	public:
		Array<T>() : _n(0) { this->_arr = nullptr; };

		Array<T>(unsigned int n) : _n(n) { this->_arr = new T[n](); };

		Array<T>(Array const &arr) { *this = arr; };

		~Array<T>() { delete [] this->_arr, this->_arr = nullptr; };

		Array	&operator =(Array const &arr)
		{
			if (this->_arr)
			{
				delete [] this->_arr, this->arr = nullptr;
			}
			this->_arr = new T[arr.size()]();
			for (unsigned int i = 0; i < arr.size(); i++)
				this->_arr[i] = arr[i];
		};
		
		unsigned int size() const { return (this->_n); };

		T	&operator[](unsigned int idx) const
		{
			if (idx >= this->_n) throw std::exception();
			return (this->_arr[idx]);
		};
};

#endif
