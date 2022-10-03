#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int x, y, p1, p2;
	std::cin >> x >> y >> p1 >> p2;

	while (true)
	{
		if (p1 < p2)
		{
			p1 += x;
		}
		else if (p1 > p2)
		{
			p2 += y;
		}
		else // p1 == p2
		{
			std::cout << p1;
			break ;
		}
		if (p1 > 10000 || p2 > 10000)
		{
			std::cout << -1;
			break ;
		}
	}

	return 0;
}
