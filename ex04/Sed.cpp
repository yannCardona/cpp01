/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:48:04 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/28 23:51:39 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fname, std::string s1, std::string s2) : _fname(fname), _s1(s1), _s2(s2)
{
	return ;
}

Sed::~Sed()
{
	return ;
}

void	Sed::replace(void)
{
	std::ifstream inputFile(this->_fname);
	std::string fileContents;
	std::ostringstream oss;
	std::size_t found;

	if (inputFile.is_open()) 
	{
		std::ofstream outputFile(this->_fname + ".replace");
		if (outputFile.is_open())
		{
			oss << inputFile.rdbuf();
			inputFile.close();
			fileContents = oss.str();
			while ((found = fileContents.find(this->_s1)) !=std::string::npos)
				fileContents = fileContents.substr(0, found) + \
				this->_s2 + fileContents.substr(found + this->_s1.length());
			outputFile << fileContents;
			outputFile.close();
			return ;
		}
	}
	std::cout << "Error opening the file." << std::endl;
	return ;
}
