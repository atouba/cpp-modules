/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/28/23, 13:05                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#ifndef CPP8_MUTANTSTACK_TPP
#define CPP8_MUTANTSTACK_TPP

#include "MutantStack.hpp"

//template<class T>

template<class T>
MutantStack<T>::MutantStack() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &m) {
	*this = m;
}

template<class T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &m) {
	(void)m;
	return *this;
}

template<class T>
MutantStack<T>::~MutantStack() {}



#endif //CPP8_MUTANTSTACK_TPP
