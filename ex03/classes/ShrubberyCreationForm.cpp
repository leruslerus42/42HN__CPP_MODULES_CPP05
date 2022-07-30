/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:20:19 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 21:20:21 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "Overloaded constructor called" << std::endl;
	setTarget(target);
}


ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("None", 145, 137)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	beSigned(executor);
	try
	{
		if (executor.getGrade() < 138)
		{
			std::ofstream outfile ("ShrubberyCreation.txt");
			outfile << "                                                      ." << std::endl;           
			outfile << "                                              .         ;  " << std::endl;    
			outfile << "                .              .              ;%     ;;   " << std::endl;
			outfile << "                  ,           ,                :;%  %;   " << std::endl;
			outfile << "                   :         ;                   :;%;'     .,   " << std::endl;                             
			outfile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
			outfile << "            ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
			outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
			outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
			outfile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
			outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
			outfile << "                   `:%;.  :;bd%;          %;@%;'" << std::endl;
			outfile << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
			outfile << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
			outfile << "                          `@%%. `@%%    ;@@%;        " << std::endl;
			outfile << "                            ;@%. :@%%  %@@%;       " << std::endl;
			outfile << "                              %@bd%%%bd%%:;     " << std::endl;
			outfile << "                                #@%%%%%:;;" << std::endl;
			outfile << "                                %@@%%%::;" << std::endl;
			outfile << "                                %@@@%(o);  . '         " << std::endl;
			outfile << "                                %@@@o%;:(.,'         " << std::endl;
			outfile << "                            `.. %@@@o%::;         " << std::endl;
			outfile << "                               `)@@@o%::;         " << std::endl;
			outfile << "                                %@@(o)::;        " << std::endl;
			outfile << "                               .%@@@@%::;         " << std::endl;
			outfile << "                               ;%@@@@%::;.          " << std::endl;
			outfile << "                              ;%@@@@%%:;;;. " << std::endl;
			outfile << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
		}
		else
			throw (Form::GradeLowerThenExec());
	}
	catch (Form::GradeLowerThenExec())
	{
		std::cerr << executor.getName() << " 's grade is  " << this->getName() << " beacause his grade is lower then the form's executable's grade!" << std::endl;
		exit(EXIT_FAILURE);
	}
}
	
ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
