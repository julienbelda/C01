/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:24 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/02 10:10:41 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon; // Peut être NULL : pas forcément armé

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack() const;
};

#endif

/*
Wepon *weapon 
	. Pointeur vers une arme
	. Peut être NULL -> HumanB sans arme
*/

/*
HumanB(std::string name)
	. Le constructeur ne prend pas d'arme
	. on initialisera weapon à NULL.
*/

/*
setWeapon(Weapon &weapon)
	. Associe une arme à HumanB après la construction
	. On stocke simplement l'adresse : this-weapon = &weapon.
*/

/*
Attack() const
	. Affiche soit "attaque avec son arme" soit un message quand il n'a pas d'arme.
	*/