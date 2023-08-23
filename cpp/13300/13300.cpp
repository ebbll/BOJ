#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n, k;
	std::cin >> n >> k;
	int	arr[2][6] = {0, };
	int	gender, grade;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> gender >> grade;
		++arr[gender][grade - 1];
	}

	int	ret = 0;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			ret += (arr[i][j] + k - 1) / k;
		}
	}

	std::cout << ret;

	return 0;
}
