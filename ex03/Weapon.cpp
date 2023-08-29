/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:30:06 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 19:19:10 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	std::cout << "A " << this->getType() << " has been created." << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "A Weapon has been destroyed." << std::endl;
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}
