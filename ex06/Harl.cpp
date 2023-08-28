/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:19:37 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/29 01:52:08 by ycardona         ###   ########.fr       */
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

void	Harl::harlFilter(std::string level)
{
	std::string	s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4 && s[i].compare(level) != 0)
		i++;
	switch (i)
	{
		case DEBUG:
			this->_debug();
		case INFO:
			this->_info();
		case WARNING:
			this->_warning();
		case ERROR:
			this->_error();
			break ;
		default:
			std::cout << "This complaint is too obscene to print..." << std::endl;
	}
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl <<std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" <<std::endl <<std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." <<std::endl <<std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl <<std::endl;
	return ;
}
