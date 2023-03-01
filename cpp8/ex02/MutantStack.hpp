/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/28/23, 12:54                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#ifndef CPP8_MUTANTSTACK_HPP
#define CPP8_MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <deque>
#include <iostream>

template<class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack& m);
	MutantStack<T>&	operator=(const MutantStack& m);
	~MutantStack();

	iterator	begin() {
		return this->c.begin();
	}
	iterator	end() {
		return this->c.end();
	}
};

#endif //CPP8_MUTANTSTACK_HPP
