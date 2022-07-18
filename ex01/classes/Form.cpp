/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:35 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/19 00:00:37 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Constructor called" << std::endl;
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
