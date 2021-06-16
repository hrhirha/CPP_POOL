/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:26:13 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/16 18:16:09 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convertChar(std::string s, dt &dt)
{
	dt.c = s[0];
	dt.i = static_cast<int>(s[0]);
	dt.f = static_cast<float>(s[0]);
	dt.d = static_cast<double>(s[0]);
}

void	convertInt(std::string s, dt &dt)
{
	try { dt.i = std::stoi(s); }
	catch(const std::exception& e) { std::cerr << "Out of range" << '\n'; exit(1); }
	if (dt.i < std::numeric_limits<char>::min()
		|| dt.i > std::numeric_limits<char>::max()) dt.c = -1;
	else if (dt.i < 32 || dt.i > 126) dt.c = 0;
	else dt.c = static_cast<char>(dt.i);
	dt.f = static_cast<float>(dt.i);
	dt.d = static_cast<double>(dt.i);
}

void	convertFloat(std::string s, dt &dt)
{
	try { dt.f = std::stof(s); }
	catch(const std::exception& e) { std::cerr << "Out of range" << '\n'; exit(1); }
	if (dt.f < std::numeric_limits<char>::min()
		|| dt.f > std::numeric_limits<char>::max()) dt.c = -1;
	else if (dt.f < 32 || dt.f > 126) dt.c = 0;
	else dt.c = static_cast<char>(dt.f);
	dt.i= static_cast<int>(dt.f);
	dt.d = static_cast<double>(dt.f);
}

void	convertDouble(std::string s, dt &dt)
{
	try { dt.d = std::stod(s); }
	catch(const std::exception& e) { std::cerr << "Out of range" << '\n'; exit(1); }
	if (dt.d < std::numeric_limits<char>::min()
		|| dt.d > std::numeric_limits<char>::max()) dt.c = -1;
	else if (dt.d < 32 || dt.d > 126) dt.c = 0;
	else dt.c = static_cast<char>(dt.d);
	dt.i = static_cast<int>(dt.d);
	dt.f = static_cast<float>(dt.d);
}
