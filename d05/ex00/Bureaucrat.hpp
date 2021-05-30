/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:41:33 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 13:43:03 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class	Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		Bureaucrat();
	public:
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();

		Bureaucrat	&operator =(Bureaucrat const &);

		std::string const	&getName() const;
		int					getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

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

std::ostream	&operator <<(std::ostream &o, Bureaucrat const &b);

#endif
