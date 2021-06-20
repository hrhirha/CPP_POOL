/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 14:21:36 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/20 15:51:31 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template <class T>
class	MutantStack : public std::stack<T>
{
	
	public:
		MutantStack();
		MutantStack(MutantStack const &);
		~MutantStack();

		MutantStack	&operator =(MutantStack const &);

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		iterator			begin();
		iterator			end();
		reverse_iterator	rbegin();
		reverse_iterator	rend();
};

#endif
