/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:15:49 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/24 09:44:03 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N;
	int i;

	i = 0;
	N = 7;
	Zombie *horde = zombieHorde(N, "BROBRO");
	if(!horde)
		return (1);
	while(i < N)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
	return(0);
}