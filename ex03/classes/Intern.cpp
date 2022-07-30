/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:24:25 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/29 21:12:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Destructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Intern	&Intern::operator = (const Intern &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	int j = 3;
	bool button = false;

	std::string form_name[3] =
	{
		"robotomy request",
		"presidential pardon request",
		"shrubbery creation request"
	};

	Form	*form_instance[3] =
	{
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};

	while (i < 3)
	{
		if (name == form_name[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			button = true;
		}
		i++;
	}
	
	if (button == false)
		i = -1;
	while (j--)
	{
		if (i == j)
			continue;
		delete form_instance[j];
	}
	
	if (button == true)
		return (form_instance[i]);
	throw (InvalidFormException());

	return (0);
}
