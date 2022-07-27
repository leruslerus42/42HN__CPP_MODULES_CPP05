/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:22:38 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 23:57:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdlib.h>

class Bureaucrat
{
	private:
		 std::string	_name;//should be constant
		int			_grade;
		
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		
		Bureaucrat	&operator=(const Bureaucrat &copy);

		std::string	getName() ;
		int			getGrade() const;
		void		increment();
		void		decrement();


		Bureaucrat	&operator<<(Bureaucrat const &copy);

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

//std::ostream &operator<<(std::ostream &output, const Bureaucrat &input);


#endif
