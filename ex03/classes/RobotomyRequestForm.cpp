/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:20:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 21:20:15 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <curses.h>
#include <stdlib.h>
 
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
	srand(time(NULL));
	int v = rand() % 100 + 1;
	try
	{
		if (executor.getGrade() < 46)
		{
			std::cout << '\a' ;//print default bell (ascii table 7) - also printf \\a on terminal
			if (v % 2 == 0)
				std::cout << this->getName() << " has been robotomized successfully. You've been lucky by a 50\% odds probability! Your lucky number is: " << v << std::endl;
			else
				std::cout << this->getName() << " has not been robotomized successfully. You've been unlucky by a 50\% odds probability! Your unlucky number is: " << v << std::endl;
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
