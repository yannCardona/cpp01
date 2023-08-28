/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:29:53 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/28 12:12:58 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
		
	char	c;
	std::size_t found;
	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string fileContents;
	std::ofstream outputFile(name + ".replace");
	std::ifstream inputFile;

    inputFile.open(argv[1]);
    if (inputFile.is_open() && outputFile.is_open()) 
	{    
		while (inputFile.get(c))
			fileContents += c;
		while ((found = fileContents.find(s1)) !=std::string::npos)
			fileContents = fileContents.substr(0, found) + s2 + fileContents.substr(found + s1.length());
		outputFile << fileContents;
		inputFile.close();
		outputFile.close();
	}
    return 0;
}
