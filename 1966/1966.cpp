#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	for (int loop = 0; loop < t; ++loop)
	{
		int n, m;
		std::cin >> n >> m;
		std::vector<int> vec(n);
		for (int i = 0; i < n; ++i)
		{
			std::cin >> vec[i];
		}
		int turn = 0;
		int curr = 0;
		while (true)
		{
			if (*std::max_element(vec.begin(), vec.end()) <= vec[curr])
			{
				vec[curr] = 0;
				++turn;
				if (curr == m)
				{
					std::cout << turn << '\n';
					break ;
				}
			}
			curr = (curr + 1) % n;
		}
	}

	return 0;
}
