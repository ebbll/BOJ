#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> x(3);
	std::vector<int> y(3);

	for (int i = 0; i < 3; ++i)
	{
		std::cin >> x[i] >> y[i];
	}
	int a, b;
	for (int i = 0; i < 3; ++i)
	{
		if (std::count(x.begin(), x.end(), x[i]) == 1)
			a = x[i];
		if (std::count(y.begin(), y.end(), y[i]) == 1)
			b = y[i];
	}
	std::cout << a << ' ' << b;

	return 0;
}
