/*------------------------------------------------------------------------------|
|  Created by   atouba                  |   at 2/17/23, 14:49                   |
|               atouba@student.1337.ma  |                                       |
| -----------------------------------------------------------------------------*/

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat l = WrongCat();

	std::cout << std::endl << "-------------------------------------------------" << std::endl << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "-------------------------------------------------" << std::endl << std::endl;

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();

	std::cout << std::endl;
	std::cout << l.getType() << std::endl;
	l.makeSound();

	std::cout << std::endl << "-------------------------------------------------" << std::endl << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	delete(k);
	return 0;
}