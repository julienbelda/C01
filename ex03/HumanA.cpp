/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:17 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 15:25:20 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
	weapon(weapon) → initialise la référence weapon
	Ceci est OBLIGATOIRE : une référence ne peut pas être assignée, elle doit être initialisée
*/

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{

}

void HumanA::attack() const
{
	std::cout << this->name << " attcks with their " << this->weapon.getType() << std::endl;
}