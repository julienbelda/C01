/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:16:32 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/24 09:45:44 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie *horde = new Zombie[N];
	while(i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return(horde);
}