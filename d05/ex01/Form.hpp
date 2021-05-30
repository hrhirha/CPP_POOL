/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:30:22 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 18:25:20 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

// class	Bureaucrat;

class	Form
{
	private:
		std::string const	_name;
		int const			_gradeToSign;
		int const			_gradeToExec;
		bool				_signed;

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const &);
		~Form();

		Form	&operator =(Form const &);

		std::string const	&getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				isSigned() const;
		void				beSigned(Bureaucrat &);
	
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
};

std::ostream	&operator <<(std::ostream &o, Form const &f);

#endif
