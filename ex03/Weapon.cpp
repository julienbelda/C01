/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:31 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/25 14:39:29 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) : type(type)
{

}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
