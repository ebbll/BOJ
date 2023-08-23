#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	int ret = 0;
	while (ret <= n)
	{
		int sum = ret;
		int temp = ret;
		while (temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if (n == sum)
		{
			std::cout << ret;
			return 0;
		}
		ret++;
	}
	std::cout << '0';

	return 0;
}
