#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	for (int loop = 0; loop < t; ++loop)
	{
		int h, w, n;
		std::cin >> h >> w >> n;
		int x = (n - 1) / h + 1;
		int y = (n - 1) % h + 1;
		std::cout << 100 * y + x << '\n';
	}

	return 0;
}
