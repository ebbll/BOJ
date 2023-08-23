#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b;
	std::cin >> a >> b;
	int min = a < b ? a : b;
	for (int i = 1; i <= min; ++i)
	{
		if (a % i == 0 && b % i == 0)
			std::cout << i << ' ' << a / i << ' ' << b / i << '\n';
	}

	return 0;
}