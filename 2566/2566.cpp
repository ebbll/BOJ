#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int max = -1;
	int x, y;
	int input;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			std::cin >> input;
			if (input > max)
			{
				x = i;
				y = j;
				max = input;
			}
		}
	}
	std::cout << max << '\n' << x + 1 << ' ' << y + 1;

	return 0;
}