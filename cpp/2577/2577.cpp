#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	a, b, c;
	std::cin >> a >> b >> c;

	int	mult;
	int	arr[10] = {0, };

	for (mult = a * b * c; mult > 0; mult = mult / 10)
	{
		++arr[mult % 10];
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
