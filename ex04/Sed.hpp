/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:43:29 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/30 13:36:36 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

class Sed
{
public:
	Sed(std::string ifname);
	~Sed(void);

	void	replace(std::string s1, std::string s2);

private:
	std::string		_ifname;
	std::ifstream	_inputFile;
	std::string		_ofname;
};

#endif