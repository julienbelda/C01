/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:17:50 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/24 11:13:56 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombilife;

	zombilife = newZombie("BROSKI");
	zombilife->announce();
	delete zombilife;
	randomChump("LAHUISS");
	return (0);
}