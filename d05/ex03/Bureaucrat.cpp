/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:36:22 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/02 16:29:13 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name)
{
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : _name(b.getName())
{
	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator =(Bureaucrat const &b)
{
	this->_grade = b.getGrade();
	return (*this);
}

std::string const	&Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1) throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150) throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.isSigned() && this->_grade <= f.getGradeToSign())
		std::cout << this->_name << " signs " << f.getName() << std::endl;
	else if (this->_grade <= f.getGradeToSign())
		f.beSigned(*this);
	else
	{
		std::cout << this->_name << " cannot sign " << f.getName()
			<< " because his grade (" << this->_grade
			<< ") is lower than the grade required to Sign this form."
			<< std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &f)
{
	try
	{
		f.execute(*this);
		std::cout << this->_name << " executes " << f.getName()
			<< "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " " << e.what() << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is Too High");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is Too Low");
}

std::ostream	&operator <<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}

