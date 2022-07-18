/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:22:31 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 23:58:17 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Overloaded Constructor called" << std::endl;
	this->_name = name;	
	try {
		this->_grade = grade;
		if (this->_grade > 150)
			throw (Bureaucrat::GradeTooLowException ());
		else if (this->_grade < 1)
			throw (Bureaucrat::GradeTooHighException ());
	}
	catch (Bureaucrat::GradeTooLowException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be lower then 150!" << std::endl;
		exit(EXIT_FAILURE);
		//EXIT_FAILURE;
	}
	catch (Bureaucrat::GradeTooHighException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be higher then 1!" << std::endl;
		exit(EXIT_FAILURE);//EXIT_FAILURE;
	}
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::increment()
{
	try {
		if ((this->_grade - 1) < 1)
			throw (Bureaucrat::GradeTooHighException ());
	}
	catch (Bureaucrat::GradeTooHighException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be higher then 1!" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	Bureaucrat::decrement()
{
	try {
		if ((this->_grade + 1) > 150)
			throw (Bureaucrat::GradeTooLowException ());
	}
	catch (Bureaucrat::GradeTooLowException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be lower then 150!" << std::endl;
		exit(EXIT_FAILURE);
	}
	
}

// std::ostream &operator<<(std::ostream &output, const Bureaucrat &Bureaucrat)
// {
// 	output << Bureaucrat.getName() << ", Bureaucrat grade " << Bureaucrat.getGrade();
// }
