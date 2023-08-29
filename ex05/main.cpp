/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:53:42 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/29 01:28:23 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	myHarl;
	std::cout << std::endl << "--------complaint on DEBUG level--------" << std::endl; 
	myHarl.complain("DEBUG");

	std::cout << std::endl << "--------complaint on INFO level--------" << std::endl; 
	myHarl.complain("INFO");
	
	std::cout << std::endl << "--------complaint on WARNING level--------" << std::endl; 
	myHarl.complain("WARNING");

	std::cout << std::endl << "--------complaint on ERROR level--------" << std::endl; 
	myHarl.complain("ERROR");

	std::cout << std::endl << "--------complaint on NEXT level--------" << std::endl; 
	myHarl.complain("NEXT");
	std::cout << std::endl;
}