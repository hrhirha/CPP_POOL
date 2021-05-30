/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:55:02 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/30 19:07:36 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRBBERYCREATIONFORM_HPP
# define SHRBBERYCREATIONFORM_HPP
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator =(ShrubberyCreationForm const &);
		
		void		exeAction(Bureaucrat const &) const;
};

#endif
