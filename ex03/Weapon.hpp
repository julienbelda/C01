/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:37:29 by julienbelda       #+#    #+#             */
/*   Updated: 2026/02/25 14:39:35 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type); // Constructeur utile
		const std::string &getType() const; //Renvoie une rèf const
		void setType(const std::string &newType); //Modifie type
};

#endif