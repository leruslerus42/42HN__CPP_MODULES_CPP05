/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:35 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 04:19:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void) : _name("none"), _sign(false), _gradeToSign(150), _grade (150)
{
	std::cout << "Constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int grade) : _name(name), _sign(false), _gradeToSign(gradeToSign), _grade(grade)
{
	std::cout << "Overloaded Constructor called" << std::endl;
	//this->_name = name;
	//this->_sign = false;
	try {
	//	this->_grade = grade;
	//	this->_gradeToSign = gradeToSign;
		if (this->_grade > 150 || gradeToSign > 150)
			throw (Form::GradeTooLowException ());
		else if (this->_grade < 1 || gradeToSign < 1)
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

Form::Form(const Form &copy) : _name(copy._name), _sign(copy._sign), _gradeToSign(copy._gradeToSign), _grade (copy._grade)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Form	&Form::operator = (const Form &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

// void	Form::setName(std::string name)
// {
// 	this->_name = name;
// }

std::string	Form::getName() const
{
	return (this->_name);
}

// void	Form::setGrade(int grade)
// {
// 	this->_grade = grade;
// }

int			Form::getGrade() const
{
	return (this->_grade);
}

// void	Form::setGradeToSign(int gradeToSign)
// {
// 	this->_gradeToSign = gradeToSign;
// }

int			Form::getGradetoSign() const
{
	return (this->_gradeToSign);
}

// void	Form::setSigned(bool sign)
// {
// 	this->_sign = sign;
// }

bool			Form::getSigned() const
{
	return (this->_sign);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this-> _grade)
		{
			this->_sign = true;
			//std::cout << bureaucrat.getGrade() << "      " << this-> _grade;
		}
		else
			throw (Form::GradeTooLowException());
	}
	catch (Form::GradeTooLowException)
	{
		std::cerr << bureaucrat.getName() << " couldn't sign " << this->_name << " beacause his grade is lower then the form's executable's grade!" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void	Form::signForm(Bureaucrat const & bureaucrat)
{
	std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
}

std::ostream &operator<<(std::ostream &output, Form const &input)
 {
 	output << input.getName() << " is signed " << input.getSigned() << "with signed grade: " << input.getGradetoSign() << " and with execution grade: " << input.getGrade();
	return (output);
 }
