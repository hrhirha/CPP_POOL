/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:38:28 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 15:59:38 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("robotomy request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm
	(RobotomyRequestForm const &rrf) : Form(*this)
{
	*this = rrf;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm
	&RobotomyRequestForm::operator =(RobotomyRequestForm const &rrf)
{
	this->_target = rrf.getTarget();
	return (*this);
}

std::string const	&RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	if (!this->isSigned()) return;
	if (b.getGrade() > this->getGradeToExec())
	{
		std::cout << "it’s a failure." << std::endl;
		throw Form::ExecPermissionException();
	}
	std::cout << this->_target << " has been robotomized successfully \
50% ofthe time." << std::endl;
}
