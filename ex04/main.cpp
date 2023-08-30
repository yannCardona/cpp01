/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:29:53 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/30 13:40:16 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	Sed data(argv[1]);
	data.replace(argv[2], argv[3]);
	return 0;
}

/* void	printFile(std::string fname)
{
	std::ifstream inputFile(fname.c_str());
	std::cout << inputFile.rdbuf();
	inputFile.close();
}

int main(void)
{
	std::cout << "--------------------test1--------------------" << std::endl;
	std::cout << std::endl << "programm call:        ./sed test1 1 a" << std::endl;
	std::cout << std::endl << "file test1:           non existent" << std::endl;
	Sed test1("tests/test1");
	std::cout << std::endl << "return:               ";
	test1.replace("1", "a");
	std::cout << std::endl;

	std::cout << "--------------------test2--------------------" << std::endl;
	std::cout << std::endl << "programm call:        ./sed test2 12 x" << std::endl;
	std::cout << std::endl << "________file: test2_________"<< std::endl << std::endl;
	printFile("tests/test2");
	std::cout << std::endl << "____________________________" << std::endl;
	Sed test2("tests/test2");
	std::cout << std::endl << "____file: test2.replace____"<< std::endl << std::endl;
	test2.replace("12", "x");
	printFile("tests/test2.replace");
	std::cout << std::endl << "___________________________" << std::endl << std::endl;

	std::cout << "--------------------test3--------------------" << std::endl;
	std::cout << std::endl << "programm call:        ./sed test3 a\\na xxx" << std::endl;
	std::cout << std::endl << "________file: test3_________"<< std::endl << std::endl;
	printFile("tests/test3");
	std::cout << std::endl << "____________________________" << std::endl;
	Sed test3("tests/test3");
	std::cout << std::endl << "____file: test3.replace____"<< std::endl << std::endl;
	test3.replace("a\na", "xxx");
	printFile("tests/test3.replace");
	std::cout << std::endl << "___________________________" << std::endl << std::endl;

	std::cout << "--------------------test4--------------------" << std::endl;
	std::cout << std::endl << "programm call:        ./sed test4 bbb xxx" << std::endl;
	std::cout << std::endl << "________file: test4_________"<< std::endl << std::endl;
	printFile("tests/test4");
	std::cout << std::endl << "____________________________" << std::endl;
	Sed test4("tests/test4");
	std::cout << std::endl << "____file: test4.replace____"<< std::endl << std::endl;
	test4.replace("bbb", "xxx");
	printFile("tests/test4.replace");
	std::cout << std::endl << "___________________________" << std::endl << std::endl;
}
 */