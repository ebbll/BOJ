#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	std::vector<int> vec(n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> vec[i];
	}

	int	min = *std::min_element(vec.begin(), vec.end());

	for (int i = 1; i <= min; ++i)
	{
		bool	mod = true;
		for (int k = 0; k < vec.size(); ++k)
		{
			if (vec[k] % i != 0)
				mod = false;
		}
		if (mod)
		{
			std::cout << i << '\n';
		}
	}

	return 0;
}
