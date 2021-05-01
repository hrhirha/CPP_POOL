#include <iostream>
#include <fstream>

void replace(std::string &s, std::string s1, std::string s2)
{
	for (int i = 0; s[i];)
	{
		if (s.substr(i, s1.size()) == s1)
		{
			s.replace(i, s1.size(), s2);
			i += s2.size();
		}
		else
			i++;
	}
}

int main(int ac, char **av)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string s;

	if (ac < 4 || ac > 4)
	{
		std::cout << "Wrong number of arguments\nusage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	if (!*av[2] || !*av[3])
	{
		std::cout << "Neither s1 nor s2 can be empty!" << std::endl;
		return (1);
	}
	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "file not found: " << "`" << av[1] << "'" << std::endl;
		return (1);
	}
	ofs.open((std::string)av[1] + ".replace");
	while (true)
	{
		std::getline(ifs, s);
		if (ifs.eof())
			break;
		replace(s, av[2], av[3]);
		ofs << s << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}