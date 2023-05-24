#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <exception>
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T cont, int toFind)
{
	typename T::iterator result = std::find(cont.begin(), cont.end(), toFind);
	if (*result != toFind)
		throw std::exception();
	else
		return (result);
}


#endif