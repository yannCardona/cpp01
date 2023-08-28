/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycardona <ycardona@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:15:14 by ycardona          #+#    #+#             */
/*   Updated: 2023/08/29 01:47:25 by ycardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class Harl
{
public:
	Harl(void);
	~Harl(void);
	void	harlFilter(std::string level);
	
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};

#endif