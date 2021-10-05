#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*h_weapon;
		std::string	name;

	public:
		HumanB(std::string h_name = "noname"): name(h_name) {};
		~HumanB() {};
		void	setWeapon(Weapon w);
		void	attack(void);
};


#endif