/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/24/23, 01:51                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &d) {*this = d;}

Serializer&	Serializer::operator=(const Serializer &d) {
	return *this;
}

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data *ptr) {
	uintptr_t	res = reinterpret_cast<uintptr_t>(ptr);

	return res;
}

Data*	Serializer::deserialize(uintptr_t raw) {
	Data*	res = reinterpret_cast<Data*>(raw);

	return res;
}