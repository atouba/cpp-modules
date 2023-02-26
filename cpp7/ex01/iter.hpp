/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 15:57                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP7_ITER_HPP
#define CPP7_ITER_HPP

#include <iostream>

template<typename T>
void	fun(T& x) {
	std::cout << x << " ";
}

template<typename T>
void	iter(T* arr, int length, void (*fun)(T const & x)) {
	for (int i = 0; i < length; i++) {
		(fun)(arr[i]);
	}
}

#endif //CPP7_ITER_HPP
