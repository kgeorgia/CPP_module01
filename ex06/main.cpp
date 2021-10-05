#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen my_karen;
	std::string	cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}

	for (int num_cmd = 0; num_cmd < 4; num_cmd++)
		if (cmd[num_cmd] == argv[1])
		{
			std::cout << '[' << argv[1] << ']' << std::endl;
			switch (num_cmd)
			{
				case 0:
					my_karen.complain(cmd[0]);
					num_cmd++;
				case 1:
					my_karen.complain(cmd[1]);
					num_cmd++;
				case 2:
					my_karen.complain(cmd[2]);
					num_cmd++;
				case 3:
					my_karen.complain(cmd[3]);
					num_cmd++;
			}
			return (0);
		}

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	return (0);
}