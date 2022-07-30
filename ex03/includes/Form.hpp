/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:20:30 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/29 06:57:57 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const _name ;
		bool	_sign;
		int	const _gradeToSign ;
		int const _grade ;
		std::string	target;

	public:
		Form(void);
		Form(std::string name, int grade, int gradeToSign);
		virtual ~Form(void);
		Form(const Form &copy);

		Form	&operator = (const Form &copy);

		std::string	getName() const;
		int		getGrade() const;
		int		getGradetoSign() const;
		bool	getSigned() const;

		void	beSigned(Bureaucrat const & bureaucrat);
		void	signForm(Bureaucrat const & bureaucrat);

		std::string const getTarget();
		void	const	setTarget(std::string t);

		virtual void	execute(Bureaucrat const & executor) = 0;
		
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

		struct GradeLowerThenExec : public std::exception {
			const char *what () const throw(){
				return ("Exception!");
			}
		};
};

std::ostream &operator<<(std::ostream &output, Form const &input);

#endif
