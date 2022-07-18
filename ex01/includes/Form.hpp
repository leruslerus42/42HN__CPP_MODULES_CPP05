/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:00:42 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/19 00:02:22 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	private:
		const std::string _name;
		bool	_signed;
		const	int	_gradeToSign;
		const	int _grade;
	public:
		Form(void);
		~Form(void);
		Form(const Form &copy);

		Form	&operator = (const Form &copy);
};

#endif
