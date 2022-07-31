/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:24:12 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 21:55:36 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

/*ADD executeForm(Form const & form)-> Conflict bei include form in bureaucrat class*/

int main()
{
	Bureaucrat bureaucrat("Charlie", 1);

	  PresidentialPardonForm pform = PresidentialPardonForm("Pform");/*1-5*/
	pform.execute(bureaucrat);

	  RobotomyRequestForm rform = RobotomyRequestForm("Rform"); /*1-45*/
	rform.execute(bureaucrat);

	 


	 ShrubberyCreationForm sform = ShrubberyCreationForm("Sform"); /*1-137*/
	sform.execute(bureaucrat);

	
	//bureaucrat.executeForm(rform); NOT WORKING
	
	
	return (0);
}
