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
		
		class SpanFullException: public std::exception{
			virtual const char* what() const throw();
		};
		class SpanTooShortException: public std::exception{
			virtual const char* what() const throw();
		};
		class SpanNotEnoughSpaceException: public std::exception{
			virtual const char* what() const throw();
		};
		void addNumber(int i);
		void addNumberIteratorV(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
