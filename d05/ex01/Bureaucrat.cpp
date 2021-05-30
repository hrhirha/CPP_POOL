/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:36:22 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 18:27:00 by hrhirha          ###   ########.fr       */
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

void	Bureaucrat::signForm(std::string fname, bool fsigned)
{
	if (fsigned)
		std::cout << this->_name << " signs " << fname << std::endl;
	else
		std::cout << this->_name << " cannot sign " << fname
			<< " because his grade (" << this->_grade << ")"
			" is lower than the grade required to Sign this form." << std::endl;
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

