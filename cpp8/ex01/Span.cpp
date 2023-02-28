/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 2/27/23, 15:35                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#include "Span.hpp"

Span::Span(): _n(0) {}

Span::Span(const Span &s) {
	*this = s;
}

Span&	Span::operator=(const Span &s) {
	if (this != &s) {
		_n = s._n;
		for (unsigned int i = 0; i < s._nums.size(); i++)
			_nums.push_back(s._nums[i]);
	}
	return *this;
}

Span::~Span() {}

Span::Span(unsigned int n): _n(n) {}

void	Span::addNumber(int number) {
	try {
		if (_n == _nums.size())
			throw (std::exception());
	}
	catch (std::exception&) {
		std::cout << "Error: Couldn't add " << number << ", since there are already " << _n << " numbers" << std::endl;
		return ;
	}
	_nums.push_back(number);
}

unsigned int	Span::shortestSpan() {
	unsigned int	shortestspan;

	try {
		if (_n <= 1)
			throw (std::exception());
	}
	catch (std::exception&) {
		std::cout << "Error: Couldn't conduct a shortest span" << std::endl;
		exit(1);
	}
	std::sort(_nums.begin(), _nums.end());
	shortestspan = _nums[1] - _nums[0];
	for (unsigned int i = 1; i < _nums.size() - 1; i++) {
		if (shortestspan > (unsigned int)(_nums[i + 1]) - (unsigned int)(_nums[i]))
			shortestspan = _nums[i + 1] - _nums[i];
	}
	return shortestspan;
}

unsigned int	Span::longestSpan() {
	try {
		if (_n <= 1)
			throw (std::exception());
	}
	catch (std::exception&) {
		std::cout << "Error: Couldn't conduct a shortest span" << std::endl;
		std::exit(1);
	}

	std::sort(_nums.begin(), _nums.end());

	return _nums.back() - _nums.front();
}