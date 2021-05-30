/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:07:06 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 19:12:00 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string) :
	Form("ShrubberyCreation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scf)
{
	*this = scf;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm
	&ShrubberyCreationForm::operator =(ShrubberyCreationForm const &scf)
{
	return (*this);
}

void	ShrubberyCreationForm::exeAction(Bureaucrat const &b)  const
{
	
}
