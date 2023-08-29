/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:22:31 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 19:17:50 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
public:
	Weapon(std::string name);
	~Weapon(void);
	void				setType(std::string type);
	const std::string 	&getType(void);

private:
	std::string _type;
};

#endif