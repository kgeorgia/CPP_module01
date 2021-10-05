#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::string input_str, std::string str1, std::string str2, std::ofstream &r_file)
{
	std::size_t found_pos;

	while (1)
	{
		found_pos = -1;
		found_pos = input_str.find(str1);
		if (found_pos >= 0 && found_pos <= input_str.length())
		{
			r_file << input_str.substr(0, found_pos) << str2;
			input_str.erase(0, found_pos + str1.length());
		}
		else
		{
			r_file << input_str;
			break;
		}
	}
}

int main(int argc, char **argv)
{
	std::string	str;
	std::string	filename;

	if (argc == 4)
	{
		filename = argv[3];
		std::ifstream file(filename);
		if (file.bad() || file.fail())
		{
			std::cout << "No such file!" << std::endl;
			return (0);
		}
		filename += ".replace";
		std::ofstream r_file(filename);

		while (std::getline(file, str))
		{
			ft_replace(str, argv[1], argv[2], r_file);
			if (!file.eof())
				r_file << std::endl;
		}

		file.close();
		r_file.close();
	}
	else
		std::cout << "Wrong number of arguments!" << std::endl;
	return (0);
}