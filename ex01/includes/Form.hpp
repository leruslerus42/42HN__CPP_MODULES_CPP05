/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:42 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 04:17:56 by rrajaobe         ###   ########.fr       */
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

	public:
		Form(void);
		Form(std::string name, int grade, int gradeToSign);
		~Form(void);
		Form(const Form &copy);

		Form	&operator = (const Form &copy);

		//void		setName(std::string name);
		std::string	getName() const;
		//void		setGrade(int grade);
		int		getGrade() const;
		//void		setGradeToSign(int gradeToSign);
		int		getGradetoSign() const;
		//void		setSigned(bool sign);
		bool		getSigned() const;

		void	beSigned(Bureaucrat const & bureaucrat);
		void	signForm(Bureaucrat const & bureaucrat);

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

std::ostream &operator<<(std::ostream &output, Form const &input);

#endif
