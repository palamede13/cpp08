#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class Span
{
	private :
		unsigned int		_size;
		std::vector<int>	_storage;
	public :
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		
		Span &operator=(const Span &op);
		
		void addNumber(int i);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
