#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int m, n;
	std::cin >> m >> n;
	std::string list[m];
	for (int i = 0; i < m; ++i)
	{
		std::cin >> list[i];
	}

	std::vector<int> arr(m * n, 0);
	for (int row = 0; row < m; ++row)
	{
		char first, second;
		if (row % 2 == 0)
		{
			first = 'B';
			second = 'W';
		}
		else
		{
			first = 'W';
			second = 'B';
		}
		for (int i = 0; i < n; ++i)
		{
			if (i % 2 == 0)
			{
				if (list[row][i] != first)
					arr[row * n + i] = 1;
			}
			else
			{
				if (list[row][i] != second)
					arr[row * n + i] = 1;
			}
		}
	}

	/*
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << arr[i * n + j];
		}
		std::cout << '\n';
	}
	*/

	int min = 64;
	for (int i = 0; i <= m - 8; ++i)
	{
		for (int j = 0; j <= n - 8; ++j)
		{
			int count = 0;
			for (int row = i; row < i + 8; ++row)
			{
				for (int col = j; col < j + 8; ++col)
				{
					if (arr[row * n + col])
						++count;
				}
			}
			count = count < 64 - count ? count : 64 - count;
			if (min > count)
				min = count;
		}
	}
	std::cout << min;

	return 0;
}
