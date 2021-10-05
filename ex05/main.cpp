#include "Karen.hpp"

int main(void)
{
	Karen my_karen;

	my_karen.complain("DEBUG");
	my_karen.complain("INFO");
	my_karen.complain("WARNING");
	my_karen.complain("ERROR");
	my_karen.complain("WARNING");
	return (0);
}