/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:24:20 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/29 07:48:48 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		/*private members*/
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &copy);

		Intern	&operator = (const Intern &copy);

		Form	*makeForm(std::string name, std::string target);
	
		struct InvalidFormException : public std::exception {
		const char *what () const throw(){
			return ("Please insert a valid Form!");
		}
	};

};

#endif
