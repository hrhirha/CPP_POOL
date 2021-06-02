/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:38:28 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/02 16:42:52 by hrhirha          ###   ########.fr       */
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
	static int	ivar(1);

	if (b.getGrade() > this->getGradeToExec() || !this->isSigned())
	{
		throw Form::ExecPermissionException();
	}
	if ((ivar % 2))
	{
		std::cout << "VVVVVvvvvvVVvvvvVVV..." << std::endl;
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "it’s a failure." << std::endl;
	ivar++;
}
