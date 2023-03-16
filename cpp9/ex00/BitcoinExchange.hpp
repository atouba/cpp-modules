/*                                                                              *
   ┌──────────────────────────────────────┬───────────────────────────────────┐
   │ Created by   atouba                  │  at 3/16/23, 19:50                │
   │              atouba@student.1337.ma  │                                   │
   └──────────────────────────────────────┴───────────────────────────────────┘
 *                                                                              */

#ifndef CPP09_BITCOINEXCHANGE_HPP
#define CPP09_BITCOINEXCHANGE_HPP

#include <stack>
#include <iostream>
#include <fstream>

class BitcoinExchange {
private:
	std::stack<std::string>	_input;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& b);
	BitcoinExchange&	operator=(const BitcoinExchange& b);
	~BitcoinExchange();

	void	fill_input(std::ifstream& input);
	void	check_input();
	void	execute_input();
};


#endif //CPP09_BITCOINEXCHANGE_HPP
