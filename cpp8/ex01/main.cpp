/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/27/23, 15:54                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#include "Span.hpp"
#include <cstdlib>

int main() {
	std::vector<int>	c;
	Span				a(5);

	c.push_back(11);
	c.push_back(3);
	c.push_back(8);
	c.push_back(10);
	c.push_back(1);

	a.addNumbers(c.begin(), c.end());

	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl << std::endl;

	a.addNumber(9);
}

//int main() {
//	Span	a(10000);
//
//	std::srand(time(0));
//	for (int i = 0; i < 10000; i++)
//		a.addNumber(rand());
//
//	std::cout << a.shortestSpan() << std::endl;
//	std::cout << a.longestSpan() << std::endl;
//}