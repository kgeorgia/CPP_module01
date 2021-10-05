#include "Weapon.hpp"

std::string	const &Weapon::getType(void)
{
	return (type);
}

void		Weapon::setType(std::string w_type)
{
	type = w_type;
}