/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:24:12 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 16:13:42 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
	void	announce(void) const;
	void	setName(std::string name);

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
