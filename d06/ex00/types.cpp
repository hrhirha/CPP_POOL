/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:10:40 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 17:15:32 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	isChar(std::string s)
{
	if (s.size() == 1 && s[0] >= 32 && s[0] <= 126 && !isdigit(s[0]))
		return (true);
	return (false);
}

bool	isInt(std::string s)
{
	int i(0);

	if (s[i] == '+' || s[i] == '-') i++;
	for (; i < (int)s.size(); i++)
	{
		if (!isdigit(s[i])) return (false);
	}
	return (true);
}

bool	isFloat(std::string s)
{
	int i(0), dot(0);

	if (s == "nanf" || s == "+inff" || s == "-inff") return (true);
	if (s.back() != 'f') return (false);
	if (s[i] == '+' || s[i] == '-') i++;
	for (; i < (int)s.size()-1; i++)
	{
		if (s[i] == '.' && dot) return (false);
		if (s[i] == '.') dot++;
		else if (!isdigit(s[i])) return (false);
	}
	return (true);
}

bool	isDouble(std::string s)
{
	int i(0), dot(0);

	if (s == "nan" || s == "+inf" || s == "-inf") return (true);
	if (s[i] == '+' || s[i] == '-') i++;
	for (; i < (int)s.size(); i++)
	{
		if (s[i] == '.' && dot) return (false);
		if (s[i] == '.') dot++;
		else if (!isdigit(s[i])) return (false);
	}
	return (true);
}
