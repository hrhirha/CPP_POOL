/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 10:28:22 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/19 13:26:11 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class	Span
{
	unsigned int	_n;
	std::vector<int>		_v;

	public:
		Span();
		Span(unsigned int);
		Span(Span const &);
		~Span();

		Span	&operator =(Span const &);

		unsigned int		size() const;
		std::vector<int>	getVec() const;
		
		void	addNumber(int);
		template <class RandomIterator>
		void	addNumber(RandomIterator first, RandomIterator last);
		int		shortestSpan();
		int		longestSpan();

		class	FullException : public std::exception
		{
			virtual const char	*what() const throw();
		};

		class	SpanException : public std::exception
		{
			virtual const char	*what() const throw();
		};
};

template <class RandomIterator>
void	Span::addNumber(RandomIterator first, RandomIterator last)
{
	for (RandomIterator it = first; it != last; it++)
		addNumber(*it);
}

#endif
