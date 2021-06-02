/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:07:06 by hrhirha           #+#    #+#             */
/*   Updated: 2021/06/02 16:39:23 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm
	(ShrubberyCreationForm const &scf) : Form(*this)
{
	*this = scf;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm
	&ShrubberyCreationForm::operator =(ShrubberyCreationForm const &scf)
{
	this->_target = scf.getTarget();
	return (*this);
}

std::string const	&ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	std::string trees[2];
	trees[0] = "           \\/ |    |/\n\
        \\/ / \\||/  /_/___/_\n\
         \\/   |/ \\/\n\
    _\\__\\_\\   |  /_____/_\n\
           \\  | /          /\n\
  __ _-----`  |{,-----------~\n\
            \\ }{\n\
             }{{\n\
             }}{\n\
             {{}\n\
       , -=-~{ .-^- _\n\
             `}\n\
              {";
	trees[1] = "                                              .\n\
                                   .         ;\n\
      .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'\n\
      `:;%.    ;%%. %@;        %; ;@%;%'\n\
         `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;\n\
               `@%%. `@%%    ;@@%;\n\
                 ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;\n\
                     #@%%%%%:;;\n\
                     %@@%%%::;\n\
                     %@@@%(o);  . '\n\
                     %@@@o%;:(.,'\n\
                 `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                     %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,..";

	if (b.getGrade() > this->getGradeToExec() || !this->isSigned())
		throw Form::ExecPermissionException();
	std::ofstream o(this->_target + "_shrubbery");
	o << trees[0] << std::endl;
	o << trees[1] << std::endl;
	o.close();
}
