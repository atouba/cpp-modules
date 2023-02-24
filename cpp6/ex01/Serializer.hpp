/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/24/23, 01:51                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef CPP6_SERIALIZER_HPP
#define CPP6_SERIALIZER_HPP

#include "Data.hpp"

class Serializer {
public:
	Serializer();
	Serializer(const Serializer& s);
	Serializer&	operator=(const Serializer& s);
	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif //CPP6_SERIALIZER_HPP
