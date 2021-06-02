/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:04:19 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 16:45:10 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern::~Intern() {}

Intern	&Intern::operator =(Intern const &intern)
{
	(void)intern;
	return (*this);
}

Form	*Intern::makeForm(std::string fname, std::string target)
{
	Form	*forms[3];

	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (forms[i]->getName() != fname)
		{
			delete forms[i];
			forms[i] = NULL;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (forms[i])
		{
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return (forms[i]);
		}
	}
	std::cout << "intern cannot make " << fname << " form." << std::endl;
	return NULL;
}
