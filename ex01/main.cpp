/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:09:48 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 16:15:19 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << std::endl << "------create a ZombieHorde of 7-------" << std::endl;
	Zombie *horde = zombieHorde(7 , "Ursula");

	std::cout << std::endl << "------the horde's Zombies are announcing themselves-------" << std::endl;
	int i = 0;
	while (i < 7)
	{
		horde[i].announce();
		i++;
	}
	std::cout << std::endl << "------destroy the horde------" << std::endl;
	delete[] horde;
	return (0);
}
