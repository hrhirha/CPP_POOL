/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 10:47:47 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/20 18:47:13 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span(unsigned int un) : _n(un) {}

Span::Span(Span const &sp)
{
	*this = sp;
}

Span::~Span() {}

Span	&Span::operator =(Span const &sp)
{
	this->_n = sp.size();
	this->_v = sp.getVec();
	return (*this);
}

unsigned int	Span::size() const
{
	return (this->_n);
}

std::vector<int>	Span::getVec() const
{
	return (this->_v);
}

void	Span::addNumber(int num)
{
	if (this->_v.size() == this->_n) throw FullException();
	this->_v.push_back(num);
}

int	Span::shortestSpan()
{
	std::vector<int>	tmp = this->_v;
	int					span(std::numeric_limits<int>::max());

	if (this->_v.size() <= 1) throw SpanException();
	sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size()-1; i++)
	{
		span = std::min(span, tmp[i+1] - tmp[i]);
	}
	return (span);	
}

int	Span::longestSpan()
{
	std::vector<int>	tmp = this->_v;

	if (this->_v.size() <= 1) throw SpanException();
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end()-1) - *tmp.begin());
}

const char	*Span::FullException::what() const throw()
{
	return ("You Can't any more numbers");
}

const char	*Span::SpanException::what() const throw()
{
	return ("Size is too Small");
}
