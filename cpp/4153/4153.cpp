#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true)
	{
		std::vector<int> vec(3);
		std::cin >> vec[0] >> vec[1] >> vec[2];
		if (std::count(vec.begin(), vec.end(), 0) == 3)
			break ;
		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			vec[i] = vec[i] * vec[i];
			sum += vec[i];
		}
		if (sum == *(std::max_element(vec.begin(), vec.end())) * 2)
			std::cout << "right\n";
		else
			std::cout << "wrong\n";
	}

	return 0;
}
