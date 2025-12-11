/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:18:26 by julienbelda       #+#    #+#             */
/*   Updated: 2025/12/01 10:18:43 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Constructeur -> Copie le paramètre name dans l'attribut this->name
*/

Zombie::Zombie(std::string name) : name(name)
{

}

/*
	Destructeur -> Affiche le message, quand l'objet est détruit
*/

Zombie::~Zombie()
{
	std::cout << this->name << " is destroyed" << std::endl;
}

/*
	Si name = "foo" affiche Foo: BraiiiiiiinnnzzzZ...
*/

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
