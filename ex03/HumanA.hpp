/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:21 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 15:03:14 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon; // Référence : doit être initialisé dans le constructeur

	public:
		HumanA(std::string name, Weapon &Weapon); // Obligatoire réf initialisée ici
		void attack() const;
};

#endif

/* 
Weapon &weapon :
	. Une référence doit être initialisée dans le constructeur.
	. Elle ne peut pas être changée par la suite.
	. Elle ne peut pas être NULL.
	. Elle garantit que HumanA a toujours une arme.
*/

/*
Le constructeur : HumanA(std::string name, Weapon &Weapon)
	il reçoit :
		. le nom de l'humain.
		. Une référence vers une arme existante et doit lier la référence inter : 
			HumanA::Weapon à cette arme.
*/

/*
Attack()
	Doit afficher : <name> attacks with their <weapon type>
		Donc :
	std::cout << name << " attacks with their << weapon.getType() << std::endl";
*/