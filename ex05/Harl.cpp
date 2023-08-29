/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:19:37 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/29 01:55:58 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "A Harl has been created." << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "A Harl has been shut up." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string	s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void (Harl::*funcs[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	int	i = 0;
	while (i < 4 && s[i].compare(level) != 0)
		i++;
	if (i < 4)
		(this->*funcs[i])();
	else
		std::cout << "This complaint is too obscene to print..." << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" <<std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." <<std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
	return ;
}
