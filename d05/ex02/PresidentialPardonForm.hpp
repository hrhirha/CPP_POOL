/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:45:09 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 15:20:06 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIOALPARDONFORM_HPP
# define PRESIDENTIOALPARDONFORM_HPP
# include "Form.hpp"
# include <fstream>

class	PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const &);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator =(PresidentialPardonForm const &);

		std::string	const &getTarget() const;
		void	execute(Bureaucrat const &) const;
};

#endif
