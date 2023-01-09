/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:30:37 by mruizzo           #+#    #+#             */
/*   Updated: 2023/01/08 23:30:37 by mruizzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
    (void)src;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
     if (this->getSigned() == false)
        throw Form::NotSigned();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLow();
    std::ofstream file( this->getName() + "_shrubbery" );
    file << "                                   .         ;  " << std::endl;
    file << "      .              .              ;%     ;;   " << std::endl;
    file << "        ,           ,                :;%  %;   " << std::endl;
    file << "         :         ;                   :;%;'     .,   " << std::endl;
    file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
    file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    file << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
    file << "           `@%:.  :;%.         ;@@%;'   " << std::endl;
    file << "             `@%.  `;@%.      ;@@%;         " << std::endl;
    file << "               `@%%. `@%%    ;@@%;        " << std::endl;
    file << "                 ;@%. :@%%  %@@%;       " << std::endl;
    file << "                   %@bd%%%bd%%:;     " << std::endl;
    file << "                     #@%%%%%:;;" << std::endl;
    file << "                     %@@%%%::;" << std::endl;
    file << "                     %@@@%(o);  . '         " << std::endl;
    file << "                     %@@@o%;:(.,'         " << std::endl;
    file << "                 `.. %@@@o%::;         " << std::endl;
    file << "                    `)@@@o%::;         " << std::endl;
    file << "                     %@@(o)::;        " << std::endl;
    file << "                    .%@@@@%::;         " << std::endl;
    file << "                    ;%@@@@%::;.          " << std::endl;
    file << "                   ;%@@@@%%:;;;. " << std::endl;
    file << "               ...;%@@@@@%%:;;;;,.." << std::endl;
}
