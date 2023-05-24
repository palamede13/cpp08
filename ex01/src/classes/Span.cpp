#include "Span.hpp"

Span::Span(void): _size(0)
{
	return ;
}

Span::Span(unsigned int N): _size(N), _storage(0)
{
	return ;
}

Span::Span(const Span &copy)
{
	*this = copy;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span & Span::operator=(const Span &op)
{
	if (this == &op)
		return (*this);
	_size = op._size;
	_storage = op._storage;
	return (*this);
}

void	Span::addNumber(int i)
{
	if (_storage.size() >= _size)
		throw std::out_of_range("storage already full.");
	else
		_storage.push_back(i);
}

int		Span::shortestSpan(void)
{
	std::vector<int>	tmp = _storage;
	std::vector<int>::iterator	it;
	int							result = 0;

	if (_storage.size() <= 1)
		throw std::logic_error("can't provide shortest pan : not enough numbers.");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();
	for (it = tmp.begin() + 1; it != tmp.end() - 1; it++)
	{
		if ((*(it + 1) - *it) < result)
			result = *(it + 1) - *it;
	}
	return result;
}

int		Span::longestSpan(void)
{
	std::vector <int> tmp = _storage;

	if (_storage.size() <= 1)
		throw std::logic_error("can't provide shortest pan : not enough numbers.");
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}