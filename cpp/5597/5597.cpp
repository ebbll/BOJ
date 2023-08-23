#include <iostream>

int check[30] = {0, };

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 28; ++i)
	{
		int idx;
		std::cin >> idx;
		check[idx - 1] = 1;
	}
	for (int i = 0; i < 30; ++i)
	{
		if (check[i] == 0)
		{
			std::cout << i + 1 << '\n';
		}
	}

	return 0;
}