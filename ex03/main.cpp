/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:21:16 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/29 21:20:34 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Intern.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

/*work just first, debug*/

int main()
{
	Intern someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("presidential pardon request", "Bender");
	rrf = someRandomIntern.makeForm("shrubbery creation request", "Bender");
	
	system("leaks intern");
	return (0);
}
