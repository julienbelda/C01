/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:14:14 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:26:17 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	/*AFFICHAGE ADRESSE*/
	std::cout << "Adress of str : " << &str << std::endl;
	std::cout << "Adress in stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress in stringREF : " << &stringREF << std::endl;

	/*AFFICHAGE VALEUR*/
	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value via stringPTR :" << *stringPTR << std::endl;
	std::cout << "VAlue via stringREF : " << stringREF << std::endl;

	return (0);
}