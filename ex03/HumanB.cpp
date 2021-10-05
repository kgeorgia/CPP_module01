#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon w)
{
	h_weapon = &w;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << h_weapon->getType() << std::endl;
}