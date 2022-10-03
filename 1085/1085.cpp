#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::vector<int> vec;
	vec.push_back(x);
	vec.push_back(y);
	vec.push_back(w-x);
	vec.push_back(h-y);
	std::cout << *(std::min_element(vec.begin(), vec.end()));

	return 0;
}
