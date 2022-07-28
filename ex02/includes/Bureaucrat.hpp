/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:32:30 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 19:38:49 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdlib.h>
#include "Form.hpp"

class Bureaucrat
{
	private:
		 std::string	const _name;
		int			_grade;
		
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		
		Bureaucrat	&operator=(const Bureaucrat &copy);

		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();

		void executeForm(Form const & form);
			
		struct GradeTooHighException : public std::exception {
			const char *what () const throw(){
				return ("Exception!");
			}
		};
		struct GradeTooLowException : public std::exception {
			const char *what () const throw(){
				return ("Exception!");
			}
		};
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &input);


#endif
