/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/26/23, 20:26                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#ifndef CPP8_EASYFIND_TPP
#define CPP8_EASYFIND_TPP

#include "easyfind.hpp"


template<typename T>
int easyfind(T& a, int n) {
	typename T::iterator	itr;

	itr	= std::find(a.begin(), a.end(), n);

	if (itr == a.end())
		return -1;
	return itr - a.begin();
}

#endif //CPP8_EASYFIND_TPP
