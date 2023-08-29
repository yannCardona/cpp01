/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:25:31 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 19:56:37 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << this->_name << " was created without a weapon" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " was destroyed" << std::endl;
	return ;
}

void	HumanB::attack(void) const
{
	if ((*this->_weapon).getType() == "")
		std::cout << this->_name << " attacks with bare hands." << std::endl;
	else
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon->setType(weapon.getType());
	return ;
}
