/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:29:55 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/25 19:07:59 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Message for debug" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Information message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning warning warning" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error message error" << std::endl;
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
	std::string print[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*tab[4])(void) = 
	{
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	while(i < 4)
	{
		if(print[i] == level)
		{
			(this->*tab[i])();
			return;
		}
		i++;
	}
}