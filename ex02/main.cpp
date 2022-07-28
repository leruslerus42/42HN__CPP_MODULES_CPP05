/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:24:12 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 11:29:05 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

/* ADD BEEP/FLASH LINE 45 ROBOTOMY*/
/* ASCII TREE*/
/*ADD BEI ALL EXECUTORS the const at end: execute(Bureaucrat const & executor) const */
/*ADD executeForm(Form const & form)-> Not sure if already implemented, check it later out*/

int main()
{

	//Form form("Form", 150, 11);
	Bureaucrat bureaucrat("Charlie", 46);

	//PresidentialPardonForm pform = PresidentialPardonForm("Pform");/*1-5*/
	//pform.execute(bureaucrat);

	//RobotomyRequestForm rform = RobotomyRequestForm("Rform"); /*1-45*/
	//rform.execute(bureaucrat);

	ShrubberyCreationForm sform = ShrubberyCreationForm("Sform"); /*1-137*/
	sform.execute(bureaucrat);

	
	//std::cout << form.getSigned() << std::endl;
	//form.beSigned(bureaucrat);
	//std::cout << form.getSigned() << std::endl;

	//form.signForm(bureaucrat);
	
	//PresidentialPardonForm(form);
	
	return (0);
}
