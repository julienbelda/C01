/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:16:32 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:16:38 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];
	while(i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return(horde);

}