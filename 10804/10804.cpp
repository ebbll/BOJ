#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> vec;
	for (int i = 0; i < 20; ++i)
	{
		vec.push_back(i + 1);
	}

	int a, b;
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> a >> b;
		std::reverse(vec.begin() + a - 1, vec.begin() + b);
	}
	for (int i = 0; i < 20; ++i)
		std::cout << vec[i] << " ";
	return 0;
}
