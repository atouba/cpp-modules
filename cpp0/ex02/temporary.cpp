#include <iostream>
#include <vector>
#include <ctime>

class Rand {
	public:
// 		typedef	Rand	t;
		Rand(int a) : a(a) {std::cout << "rand created; a: " << a << std::endl;}
		int a;
};

int main() {
// 	int	arr[] = {1, 2, 3, 4};
// 	std::vector<Rand>	r(arr, arr + 4);

	std::time_t	t = std::time(0);
	std::tm		*now = std::localtime(&t);
	std::cout << now->tm_year << std::endl;
	std::cout << now->tm_mon << std::endl;
	std::cout << now->tm_mday << std::endl;
}

