#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b;

	int T;
	std::cin >> T;
	for (int i = 0; i < T; ++i)
	{
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}
