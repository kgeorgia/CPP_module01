/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:06:00 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/01 18:26:19 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&h_weapon;
		std::string	name;

	public:
		HumanA(std::string h_name, Weapon &w) : h_weapon(w), name(h_name) {};
		~HumanA() {};
		void	attack(void);
};


#endif