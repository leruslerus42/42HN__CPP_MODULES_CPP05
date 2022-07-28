/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:32:36 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 19:37:19 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("none")
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Overloaded Constructor called" << std::endl;
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
	}
	catch (Bureaucrat::GradeTooHighException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be higher then 1!" << std::endl;
		exit(EXIT_FAILURE);
	}
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName() const
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
		this->_grade --;
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
		this->_grade ++;	
}
	catch (Bureaucrat::GradeTooLowException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be lower then 150!" << std::endl;
		exit(EXIT_FAILURE);
	}
	
}

void Bureaucrat::executeForm(Form const & form)
{
	//std::cout << this->getName() << " executed " << form.getName() << std::endl;
}


std::ostream &operator<<(std::ostream &output, Bureaucrat const &input)
 {
 	output << input.getName() << ", Bureaucrat grade " << input.getGrade();
	return (output);
 }
