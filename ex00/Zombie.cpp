/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:43:42 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/01 14:43:43 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << name << " died;" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << '<' << name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}