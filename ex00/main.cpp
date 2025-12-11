/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:17:50 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:18:50 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombilife;

	zombilife = newZombie("BROSKI");
	zombilife->announce();
	delete zombilife;
	randomChump("LAHUISS");
	return (0);
}