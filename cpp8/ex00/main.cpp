/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/26/23, 20:19                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#include "easyfind.tpp"
#include <deque>

int main() {
	std::vector<int>	a;

	std::deque<int>		q;

	a.push_back(3);
	a.push_back(8);
	a.push_back(2);
	a.push_back(9);

	q.push_back(3);
	q.push_back(8);
	q.push_back(2);
	q.push_back(9);

	std::cout << easyfind(a, 8) << std::endl;
	std::cout << easyfind(q, 8) << std::endl;
}