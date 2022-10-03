#include <iostream>
#include <cmath>
#include <cstdlib>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true)
	{
		int b, n, min;
		std::cin >> b >> n;
		if (b == 0 && n == 0)
			break ;
		int bet = b;
		int a;
		for (int i = 1; i <= b; ++i)
		{
			int cal = abs(b - pow(i, n));
			if (cal < bet)
			{
				bet = cal;
				a = i;
			}
			else
				break ;
		}
		std::cout << a << '\n';
	}

	return 0;
}
