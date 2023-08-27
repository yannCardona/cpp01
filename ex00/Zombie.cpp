/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:28:26 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 15:22:16 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie: " << this->_name << " has risen!" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie: " << this->_name << " has been destroyed!" << std::endl;
	return ;
}

void Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}

void Zombie::randomChump(std::string name)
{
	Zombie new_zombie = Zombie(name);
	new_zombie.announce();
	return ;
}
