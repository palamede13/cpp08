#include "classes/Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "BASIC TEST :" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "EXCEPTION TEST :" << std::endl;
	try
	{
		Span s = Span();
		s.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span s = Span();
		s.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span s = Span(5);
		std::vector<int> v;
		
		s.addNumber(6);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);
		v.push_back(6);
		v.push_back(3);
		v.push_back(17);
		v.push_back(9);
		v.push_back(11);
		s.addNumberIteratorV(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span s = Span(10);
		std::vector<int> v;
		
		s.addNumber(6);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);
		v.push_back(8);
		v.push_back(2);
		v.push_back(19);
		v.push_back(34);
		v.push_back(51);
		s.addNumberIteratorV(v.begin(), v.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}