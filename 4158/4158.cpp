#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true)
	{
		int n, m;
		std::cin >> n >> m;
		if (n == 0 && m == 0)
		{
			break ;
		}
		std::vector<int> v1(n), v2(m);
		for (int i = 0; i < n; ++i)
		{
			std::cin >> v1[i];
		}
		for (int i = 0; i < m; ++i)
		{
			std::cin >> v2[i];
		}
		int count = 0;
		int p1 = 0, p2 = 0;
		while (true)
		{
			if (p1 == n || p2 == m)
				break ;
			if (v1[p1] < v2[p2])
				++p1;
			else if (v1[p1] > v2[p2])
				++p2;
			else
			{
				++count;
				++p1;
				++p2;
			}
		}
		std::cout << count << '\n';
	}

	return 0;
}
