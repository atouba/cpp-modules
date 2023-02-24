/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/24/23, 01:46                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Data.hpp"

Data::Data(): _x(0) {}

Data::Data(int x): _x(x) {}

Data::Data(const Data &d) {*this = d;}

Data&	Data::operator=(const Data &d) {
	if (this != &d)
		*this = d;
	return *this;
}

Data::~Data() {}