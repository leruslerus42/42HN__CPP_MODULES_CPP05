/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:35 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/20 21:57:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void)
{
	std::cout << "Constructor called" << std::endl;
}

Form::Form(std::string name, int grade, int gradeToSign)
{
	std::cout << "Overloaded Constructor called" << std::endl;
	this->_name = name;	
//	this->_signed = false;
	try {
		this->_grade = grade;
		if (this->_grade > 150)
			throw (Form::GradeTooLowException ());
		else if (this->_grade < 1)
			throw (Form::GradeTooHighException ());
	}
	catch (Form::GradeTooLowException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be lower then 150!" << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Form::GradeTooHighException  &e)
	{
		std::cerr << "An Exception was caught. Grade can't be higher then 1!" << std::endl;
		exit(EXIT_FAILURE);
	}

	
}


Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}

Form::Form(const Form &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Form	&Form::operator = (const Form &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	Form::setName(std::string name)
{
	this->_name = name;
}

std::string	Form::getName() const
{
	return (this->_name);
}

void	Form::setGrade(int grade)
{
	this->_grade = grade;
}

int			Form::getGrade() const
{
	return (this->_grade);
}

void	Form::setGradeToSign(int gradeToSign)
{
	this->_gradeToSign = gradeToSign;
}

int			Form::getGradetoSign() const
{
	return (this->_gradeToSign);
}
/*
void	Form::setSigned(bool signed)
{
	this->_signed = signed;
}

bool			Form::getSigned() const
{
	return (this->_signed);
}*/

/*
void	beSigned(Bureaucrat bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this-> _gradeToSign)
			this->_signed = true;
		else
			throw (Form::GradeTooLowException);
	}
	catch (Form::GradeTooLowException)
	{
		std::cerr << "An Exception was caught. The Grade is not high enough to be signed!" << std::endl;
                exit(EXIT_FAILURE);
	}
}*/

/*
 that takes a Bureaucrat as
parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.
*/
/*bool	beSigned(Bureaucrat Bureaucrat)
{
	if (Bureaucrat->grade <= Form->_gradeToSign)
		this->_signed = true;
	
}*/
