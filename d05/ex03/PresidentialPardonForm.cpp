/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:46:00 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/02 16:39:51 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("presidential pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm
	(PresidentialPardonForm const &ppf) : Form(*this)
{
	*this = ppf;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm
	&PresidentialPardonForm::operator =(PresidentialPardonForm const &ppf)
{
	this->_target = ppf.getTarget();
	return (*this);
}

std::string const	&PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getGradeToExec() || !this->isSigned())
		throw Form::ExecPermissionException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}
