#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string num;
	std::cin >> num;

	std::vector<int>	vec(10, 0);
	for (std::string::iterator it = num.begin(); it != num.end(); ++it)
	{
		++vec[*it - '0'];
	}

	vec[9] = (vec[9] + vec[6] + 1) / 2;
	vec[6] = 0;

	std::cout << *(std::max_element(vec.begin(), vec.end()));

	return 0;
}
