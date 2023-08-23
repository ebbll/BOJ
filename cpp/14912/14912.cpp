#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, d, count = 0;
	std::cin >> n >> d;
	for (int i = 1; i <= n; ++i)
	{
		int test = i;
		while (test > 0)
		{
			if (test % 10 == d)
				++count;
			test /= 10;
		}
	}
	std::cout << count;

	return 0;
}