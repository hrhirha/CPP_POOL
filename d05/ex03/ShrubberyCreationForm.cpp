/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:07:06 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 15:59:29 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm
	(ShrubberyCreationForm const &scf) : Form(*this)
{
	*this = scf;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm
	&ShrubberyCreationForm::operator =(ShrubberyCreationForm const &scf)
{
	this->_target = scf.getTarget();
	return (*this);
}

std::string const	&ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	if (!this->isSigned()) return;
	if (b.getGrade() > this->getGradeToExec())
		throw Form::ExecPermissionException();
	std::ofstream o(this->_target + "_shrubbery");
	o << "ASCII trees" << std::endl;
	o.close();
}
