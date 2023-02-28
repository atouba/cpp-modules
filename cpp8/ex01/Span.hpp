/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/27/23, 15:35                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#ifndef CPP8_SPAN_HPP
#define CPP8_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	unsigned int		_n;
public:
	std::vector<int>	_nums;

	Span();
	Span(const Span& s);
	Span&	operator=(const Span& s);
	~Span();
	Span(unsigned int n);

	void			addNumber(int number);

	template<typename Iterator>
	void			addNumbers(Iterator begin, Iterator end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

template<typename Iterator>
void			Span::addNumbers(Iterator begin, Iterator end) {
	for (Iterator i = begin; i != end; i++)
		addNumber(*i);
}

#endif //CPP8_SPAN_HPP
