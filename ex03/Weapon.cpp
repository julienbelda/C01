/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:31 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 15:03:16 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*	Constructeur utilisé dans le main :
	initialise l'attribut type avec la valeur passée.
*/

Weapon::Weapon (std::string type) : type(type)
{

}

/*	Doit retourner une référence constante comme le sujet le demande
	const std::string & -> empêche toute copie inutile
	Méthode marqué const -> garantie que getType() ne modifie pas l'objet
	on retourne this->type.
*/

const std::string &Weapon::getType() const
{
	return (this->type);
}

/*
	Change l'arme en club.setType("some other type of club")
	On utilise une référence const pour éviter une copie et pour permettre les littéraux"...""*/

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
