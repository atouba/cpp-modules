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
	unsigned int		_s;
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
	try {
		if (end - begin > _n - _s)
			throw(std::exception());
	}
	catch(std::exception& e) {
		std::cout << "Error: Couldn't add " << end - begin << " numbers, since there isn't much space in your Spane" << std::endl;
		return ;
	}
	_nums.insert(_nums.end(), begin, end);
	_s += end - begin;
}

#endif //CPP8_SPAN_HPP
