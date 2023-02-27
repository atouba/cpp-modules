/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/26/23, 16:28                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP7_ARRAY_HPP
#define CPP7_ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
public:
	Array();
	Array(const Array& a);
	T&	operator=(const Array& a);
	~Array();
	Array(unsigned int n);

	unsigned int	size() const;
	 T&				operator[](const unsigned int idx) const;

	T*				arr;
	unsigned int	s;
};

#endif //CPP7_ARRAY_HPP
