/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:18:10 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:18:51 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

/*
	Crée un objet Zombie sur le heap
	Appelle le constructeur Zombie(name)
	Renvoie un pointeur vers ce Zombie
*/