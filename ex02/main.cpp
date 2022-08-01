/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:24:12 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/01 23:21:52 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat bureaucrat("Charlie", 1);

	  PresidentialPardonForm pform = PresidentialPardonForm("Pform");/*1-5*/
	pform.execute(bureaucrat);

	  RobotomyRequestForm rform = RobotomyRequestForm("Rform"); /*1-45*/
	rform.execute(bureaucrat);

	 


	 ShrubberyCreationForm sform = ShrubberyCreationForm("Sform"); /*1-137*/
	sform.execute(bureaucrat);

	
	bureaucrat.executeForm(pform);
	bureaucrat.executeForm(rform);
	bureaucrat.executeForm(sform);

	
	
	return (0);
}
