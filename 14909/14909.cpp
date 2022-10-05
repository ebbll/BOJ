#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, count = 0;
	while (std::cin >> n)
	{
		if (n > 0)
			++count;
	}
	std::cout << count;

	return 0;
}