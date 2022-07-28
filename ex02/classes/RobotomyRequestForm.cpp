/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:39:35 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 11:08:34 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
 #include <curses.h>
 
RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << "Overloaded constructor called" << std::endl;
	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("None", 72, 45)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	beSigned(executor);
	try
	{
		if (executor.getGrade() < 46)
		{
			//beep();//Print the special character ASCII BEL (code 7)
			std::cout << this->getName() << " has been robotomized successfully 50\% of the time!" << std::endl;
		}
		else
			throw (Form::GradeLowerThenExec());
	}
	catch (Form::GradeLowerThenExec())
	{
		std::cerr << executor.getName() << " 's grade is  " << this->getName() << " beacause his grade is lower then the form's executable's grade! THE ROBOTOMY FAILED D:!" << std::endl;
		exit(EXIT_FAILURE);
	}
}


RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
