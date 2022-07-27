/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:42 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/20 21:40:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"


class Form
{
	private:
		std::string _name;
		//bool	_signed;//nach konstruktor
		int	_gradeToSign; //required to sign in
		int _grade;//required to execute it 
	public:
		Form(void);
		Form(std::string name, int grade, int gradeToSign);
		~Form(void);
		Form(const Form &copy);

		Form	&operator = (const Form &copy);

		void		setName(std::string name);
		std::string	getName() const;
		void		setGrade(int grade);
		int		getGrade() const;
		void		setGradeToSign(int gradeToSign);
		int		getGradetoSign() const;
	//	void		setSigned(bool signed);
	//	bool		getSigned() const;


//		void	beSigned(Bureaucrat Bureaucrat);

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

#endif
