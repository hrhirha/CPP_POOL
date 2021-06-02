/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:55:02 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 15:19:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRBBERYCREATIONFORM_HPP
# define SHRBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class	ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator =(ShrubberyCreationForm const &);

		std::string	const &getTarget() const;
		void	execute(Bureaucrat const &) const;
};

#endif
