#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int	n;
	std::cin >> n;

	std::vector<int> vec;
	for (int i = 0; i < n; ++i)
	{
		int	in;
		std::cin >> in;
		vec.push_back(in);
	}

	int	v;
	std::cin >> v;

	std::cout << std::count(vec.begin(), vec.end(), v);

	return 0;
}
