#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int res = 1;

	for (int i = 1; i <= n; ++i)
	{
		res *= i;
	}
	std::cout << res;

	return 0;
}
