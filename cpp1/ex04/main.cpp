/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 1/18/23, 15:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>

void	replace(std::ifstream& in, std::ofstream& out, std::string s1, std::string s2) {

	std::string line;
	int 		pos;

	while (std::getline(in, line)) {
		while (line.find(s1) != std::string::npos) {
			pos = line.find(s1);
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		out << line;
		if (!in.eof())
			out << std::endl;
	}

}

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: program expects 3 arguments" << std::endl;
		return 1;
	}
	std::string 	file = av[1];
	std::ifstream	in(av[1]);

	if (!in.is_open()) {
		std::cout << "Error: file doesn't exist or there's a problem in permissions" << std::endl;
		return 1;
	}
	if (in.peek() == -1) {
		std::cout << "Error: file is empty" << std::endl;
		return 2;
	}
	std::ofstream	out(file + ".replace");

	replace(in, out, av[2], av[3]);
}