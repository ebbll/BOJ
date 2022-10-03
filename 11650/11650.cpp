#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<std::pair<int, int> > list;

	int n;
	std::cin >> n;
	for (int loop = 0; loop < n; ++loop)
	{
		int x, y;
		std::cin >> x >> y;
		list.push_back(std::make_pair(x, y));
	}
	std::sort(list.begin(), list.end(), std::less<>());
	for (int loop = 0; loop < n; ++loop)
	{
		std::cout << list[loop].first << ' ' << list[loop].second << '\n';
	}

	return 0;
}