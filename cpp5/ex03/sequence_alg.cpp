/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/20/23, 22:49                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool	is_sequence(std::vector<int> v) {
	int	max = *(std::max_element(v.begin(), v.end()));
	int	min = *(std::min_element(v.begin(), v.end()));

	std::sort(v.begin(), v.end());
	if (max <= 3 && min >= 0 && std::adjacent_find(v.begin(), v.end()) == v.end())
		return true;
	return false;
}

int main() {
	std::string	a = "robotomy request";
	std::string	b = "shrubbery creationForm";
	std::string	c = "presidential pardonForm";

	std::vector<int>	v;

	for (int i = 0; i < a.length(); i++) {
		v.push_back(a[i] % 4);
		v.push_back(b[i] % 4);
		v.push_back(c[i] % 4);
		if (is_sequence(v)) {
			std::cout << a[i] << " " << b[i] << " " << c[i] << std::endl;
			return 0;
		}
	}
}