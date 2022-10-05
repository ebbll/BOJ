#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	int five = n / 5;
	for (int loop = five; loop >= 0; --loop)
	{
		if ((n - 5 * loop) % 2 == 0)
		{
			std::cout << loop + (n - 5 * loop) / 2;
			return 0;
		}
	}
	std::cout << -1;

	return 0;
}