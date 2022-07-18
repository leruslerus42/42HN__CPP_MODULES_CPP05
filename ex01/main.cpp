/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:20:56 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 23:54:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"

/*error check not all exceptions are working, incremento/decremento soprattutto*/

/* TESTCASES: < 1 / >150 / increment a 0 / decrement a 151 / implement output method */
//Still implement OUTPUT METHOD, sonst OK..
int main()
{
	Bureaucrat Bureaucrat("Jacques", -9);
	std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	
	//Bureaucrat.increment();
	//std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	
	// Bureaucrat.decrement();
	// std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	
	
	return (0);
}