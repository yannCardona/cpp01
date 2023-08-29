/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:43:29 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/28 22:37:25 by ycardona         ###   ########.fr       */
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
	Sed(std::string fname, std::string s1, std::string s2);
	~Sed(void);
	//void	open(std::string fname);
	void	replace(void);

private:
	//std::ifstream _inputFile;
	//std::ofstream *_outputFile;
	std::string _fname;
	std::string _s1;
	std::string _s2;
};

#endif