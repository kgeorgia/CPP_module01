/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:43:52 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/01 14:49:41 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie first;
	Zombie second("Another");
	Zombie* third = newZombie("Yet another");

	first.announce();
	second.announce();
	third->announce();
	randomChump("Last");
	delete third;

	return (0);
}