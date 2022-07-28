/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:24:12 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 19:42:31 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

/*ADD BEI ALL EXECUTORS the const at end: execute(Bureaucrat const & executor) const -> PROBLEM: beSigned method is not const, and if I put const fuck it a bit ab.*/
/*ADD executeForm(Form const & form)-> Do it*/

int main()
{

	//Form form("Form", 150, 11);
	Bureaucrat bureaucrat("Charlie", 44);

	// PresidentialPardonForm pform = PresidentialPardonForm("Pform");/*1-5*/
	// pform.execute(bureaucrat);

	 RobotomyRequestForm rform = RobotomyRequestForm("Rform"); /*1-45*/
	rform.execute(bureaucrat);

	 


	// ShrubberyCreationForm sform = ShrubberyCreationForm("Sform"); /*1-137*/
	// sform.execute(bureaucrat);

	
	bureaucrat.executeForm(rform);
	
	
	return (0);
}
