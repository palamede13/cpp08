#include "easyfind.hpp"

int main(void)
{
	std::vector<int>			v;
	std::vector<int>::iterator	it;

	for (int i = 0; i < 20; i++)
		v.push_back(i);
	try
	{
		it = easyfind(v, 10);
		std::cout << "easy find find the int : " << *it << std::endl;
		it = easyfind(v, 50);
		std::cout << "easy find find the int : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: int not found " << std::endl;
	}
	

}