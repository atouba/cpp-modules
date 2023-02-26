/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 00:56                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP7_WHATEVER_HPP
#define CPP7_WHATEVER_HPP

#include <iostream>

template<class T>
void	swap(T& a, T& b) {
	T	c = a;

	a = b;
	b = c;
}

template<class T>
T&	min(T& a, T& b) {
	return a<b ? a:b;
}

template<class T>
T&	max(T& a, T& b) {
	return a>b ? a:b;
}

#endif //CPP7_WHATEVER_HPP
