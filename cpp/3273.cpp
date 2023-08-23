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

	int	x;
	std::cin >> x;

	std::sort(vec.begin(), vec.end());
	int	l = 0;
	int	r = n - 1;
	int	ret = 0;
	while (l < r)
	{
		int	sum = vec.at(l) + vec.at(r);
		if (sum == x)
		{
			++ret;
			++l;
			--r;
		}
		else if (sum > x)
		{
			--r;
		}
		else
		{
			++l;
		}
	}

	std::cout << ret;

	return 0;
}
