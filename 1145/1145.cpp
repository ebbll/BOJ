#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> vec(5);
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> vec[i];
	}
	std::sort(vec.begin(), vec.end());
	int ret = vec[0];
	while (ret < 1000000)
	{
		int count = 0;
		for (int i = 0; i < 5; ++i)
		{
			if (ret % vec[i] == 0)
				++count;
		}
		if (count >= 3)
		{
			std::cout << ret;
			return 0;
		}
		ret++;
	}

	std::cout << vec[0] * vec[1] * vec[2];

	return 0;
}
