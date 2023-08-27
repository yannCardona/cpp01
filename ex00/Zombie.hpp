/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:24:12 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 14:54:54 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);

	static Zombie* newZombie(std::string name);
	static void randomChump(std::string name);
	void announce(void) const;

private:
	std::string _name;
};

#endif
