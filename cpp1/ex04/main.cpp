/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 15:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: program expects 3 arguments" << std::endl;
		return 1;
	}
	std::string		line;
	std::string 	s1 = av[2];
	std::string 	file_in = av[1];
	std::ifstream	in(file_in);
	std::ofstream	out(file_in + ".replace");
	int 			pos;

	while (std::getline(in, line)) {
		while (line.find(s1) != std::string::npos) {
			pos = line.find(s1);
			line.erase(pos, s1.length());
			line.insert(pos, av[3]);
		}
		out << line;
		if (!in.eof())
			out << std::endl;
	}
}