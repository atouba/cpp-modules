/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/16/23, 21:23                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#ifndef C____A_Animal_HPP
#define C____A_Animal_HPP

#include <iostream>

class A_Animal {
protected:
	std::string	_type;

public:
	A_Animal();
	A_Animal(const A_Animal& a);
	A_Animal&	operator=(const A_Animal& a);
	virtual ~A_Animal();

	virtual	void	makeSound() const = 0;
	std::string	getType() const;
};

#endif //C____A_Animal_HPP
