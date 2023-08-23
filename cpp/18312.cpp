#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, k;
	std::cin >> n >> k;

	int ret = 0;
	for (int hour = 0; hour <= n; ++hour)
	{
		for (int min = 0; min <= 59; ++min)
		{
			for (int sec = 0; sec <= 59; ++sec)
			{
				if (hour % 10 == k || hour / 10 == k ||
					min % 10 == k || min / 10 == k ||
					sec % 10 == k || sec / 10 == k)
					ret++;
			}
		}
	}
	std::cout << ret;

	return 0;
}
