/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:17:42 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/01 15:02:35 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string z_name = "zombie") : name(z_name) {};
		~Zombie(void);
		void	setZonbieName(std::string z_name);
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif