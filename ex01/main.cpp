/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:43:52 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/01 16:28:32 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int number;
	std::string name;
	Zombie *zombies;

	std::cout << "Enter the number of zombies and their name: " << std::endl;
	std::cin >> number >> name;
	zombies = zombieHorde(number, name);
	
	for (int i = 0; i < number; i++)
		zombies[i].announce();

	delete [] zombies;
	return (0);
}