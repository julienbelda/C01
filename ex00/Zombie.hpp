/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:18:37 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:18:42 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif

/*
	name -> Nom du Zombie (privé)
	Zombie(name) -> Constructeur -> Donne le nom au zombie
	~Zombie() -> Destructeur -> Affiche un message quand il meurt
	announce() -> Fait "parler" le Zombie
	newZombie / randomChump -> Fonction free qui seront dans d'autres fichier
*/