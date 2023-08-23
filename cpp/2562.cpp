#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 9; ++i)
	{
		int in;
		std::cin >> in;
		vec.push_back(in);
	}
	std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
	std::cout << *max << std::endl;
	std::cout << max - vec.begin() + 1 << std::endl;
	return 0;
}
