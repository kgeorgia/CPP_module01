#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << h_weapon.getType() << std::endl;
}