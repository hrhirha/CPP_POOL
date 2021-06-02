/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:38:25 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/31 15:20:02 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>

class	RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const &);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator =(RobotomyRequestForm const &);

		std::string	const &getTarget() const;
		void	execute(Bureaucrat const &) const;
};

#endif
