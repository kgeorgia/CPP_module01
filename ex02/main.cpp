#include <iostream>

int main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address string = " << &str << std::endl;
	std::cout << "Address stringPTR = " << stringPTR << std::endl;
	std::cout << "Address stringREF = " << &stringREF << std::endl;

	std::cout << "stringPTR contain = " << *stringPTR << std::endl;
	std::cout << "stringREF contain = " << stringREF << std::endl;

	return (0);
}