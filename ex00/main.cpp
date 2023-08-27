/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:09:48 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 15:31:25 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << std::endl << "------create a Zombie on the heap-------" << std::endl;
	Zombie *new_zombie = Zombie::newZombie("Rosalinda");
	new_zombie->announce();
	
	std::cout << std::endl << "------create a Zombie on the stack-------" << std::endl;
	Zombie::randomChump("Clarence");

	std::cout << std::endl << "------delete the Zombie on the heap-------" << std::endl;
	delete new_zombie;
	return (0);
}