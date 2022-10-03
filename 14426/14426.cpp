#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> word(n), prefix(m);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> word[i];
	}
	for (int i = 0; i < m; ++i)
	{
		std::cin >> prefix[i];
	}
	int res = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (word[j].find(prefix[i], 0) == 0)
			{
				++res;
				break ;
			}
		}
	}
	std::cout << res;

	return 0;
}
