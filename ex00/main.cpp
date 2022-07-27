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


/* TESTCASES: middle value, < 1, >150 / increment 2, 1 / decrement 149,150 / implement output method */
/*NOTE 1: still std::os stream << to IMPLEMENT!*/
int main()
{
	Bureaucrat Bureaucrat("Jacques", 149);
	std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	/*Increment*/
	//Bureaucrat.increment();
	//std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	/*Decrement*/
	 //Bureaucrat.decrement();
	 //std::cout << "Monsier " << Bureaucrat.getName() << " have grade " << Bureaucrat.getGrade() << std::endl;
	
	
	return (0);
}
