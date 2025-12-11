/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:18:16 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:18:44 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zomb(name); //Zombie sur la stack
	zomb.announce(); // il s'annonce
	//destruction auto à la fin de la fonction -> appelle ~Zombie()
}

/*
	Zombie zomb(name) -> Zombie sur la stack
	Vit uniquement pendant la fonction
	Quand la fonction fini -> le destructeur est appellé automatiquement
	On verra s'afficher : name is destroyed
*/