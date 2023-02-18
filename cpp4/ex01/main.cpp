/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/17/23, 14:49                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete(animals[i]);
}