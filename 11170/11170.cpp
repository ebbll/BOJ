#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n, m;
		std::cin >> n >> m;
		int ret = 0;
		while (n <= m)
		{
			std::string str = std::to_string(n);
			ret += std::count(str.begin(), str.end(), '0');
			n++;
		}
		std::cout << ret << '\n';
	}

	return 0;
}
