/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:30:24 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 18:34:28 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
	_name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec),
	_signed(false)
{
	if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &f) :
	_name(f.getName()), _gradeToSign(f.getGradeToSign()),
	_gradeToExec(f.getGradeToExec())
{
	*this = f;
}

Form::~Form() {}

Form	&Form::operator =(Form const &f)
{
	this->_signed = f.isSigned();
	return (*this);
}

std::string const	&Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}
int	Form::getGradeToExec() const
{
	return (this->_gradeToExec);
}
bool	Form::isSigned() const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
		b.signForm(this->_name, this->_signed);
	}
	else
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("One of Form's grades is Too High");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("One of Form's grades is Too Low");
}

std::ostream	&operator <<(std::ostream &o, Form const &f)
{
	o << "Form : "<< f.getName()
		<< "\nGrade required to Sign : " << f.getGradeToSign()
		<< "\nGrade required to Execute : " << f.getGradeToExec();
	if (f.isSigned()) o << "\nSigned : YES";
	else o << "\nSigned : NO";
	o << std::endl;
	return (o);
}
