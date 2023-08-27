/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:19:57 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/27 16:30:06 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "--------Memory Addresses---------" <<std::endl;
	std::cout << "Memory Address string:    " << &string << std::endl;
	std::cout << "Memory Address stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address stringREF: " << &stringREF << std::endl;

	std::cout <<std::endl << "--------Memory Content---------" <<std::endl;
	std::cout << "string:    " << string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}