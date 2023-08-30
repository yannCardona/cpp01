/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:48:04 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/30 13:37:21 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string ifname) : _ifname(ifname)
{
	this->_inputFile.open(ifname.c_str());
	this->_ofname = this->_ifname + ".replace";
	return ;
}

Sed::~Sed()
{
	return ;
}

void	Sed::replace(std::string s1, std::string s2)
{
	std::ofstream outputFile;
	std::string fileContents;
	std::ostringstream oss;
	std::size_t found;

	if (this->_inputFile.is_open()) 
	{
		outputFile.open(this->_ofname.c_str());
		if (outputFile.is_open())
		{
			oss << this->_inputFile.rdbuf();
			this->_inputFile.close();
			fileContents = oss.str();
			while ((found = fileContents.find(s1)) != std::string::npos)
				fileContents = fileContents.substr(0, found) + \
				s2 + fileContents.substr(found + s1.length());
			outputFile << fileContents;
			outputFile.close();
			return ;
		}
	}
	std::cout << "Error opening the file." << std::endl;
	return ;
}
