/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:43:13 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 16:05:48 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;
	Zombie *horde = new Zombie[N];
	
	i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (&horde[0]);
}
