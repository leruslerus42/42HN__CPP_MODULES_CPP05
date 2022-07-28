/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:20:56 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/28 04:18:51 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Form.hpp"

int main()
{
	Form form("Form", 150, 11);//name, grade to be signed, grade to be executed
	Bureaucrat bureaucrat("Charlie",11);//grade of bur. should be less then grade to be executed of form 

	std::cout << form.getSigned() << std::endl;
	form.beSigned(bureaucrat);
	std::cout << form.getSigned() << std::endl;

	form.signForm(bureaucrat);
	
	
	return (0);
}
