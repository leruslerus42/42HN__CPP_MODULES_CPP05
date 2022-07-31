/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:39:26 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 20:56:36 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	std::cout << "Overloaded constructor called" << std::endl;
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("None", 25, 5)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	beSigned(executor);
	try
	{
		if (executor.getGrade() < 6)
			std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
		else
			throw (Form::GradeLowerThenExec());
	}
	catch (Form::GradeLowerThenExec())
	{
		std::cerr << executor.getName() << " 's grade is  " << this->getName() << " beacause his grade is lower then the form's executable's grade!" << std::endl;
		exit(EXIT_FAILURE);
	}
}


PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
