#include <iostream>
#include <deque>
#include <algorithm>

bool isPrime(int n)
{
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;

	bool res = true;
	for (int i = 3; i < n; i += 2)
	{
		if (n % i == 0)
		{
			res = false;
			break ;
		}
	}
	return res;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;
	for (int loop = 0; loop < t; ++loop)
	{
		int n;
		std::cin >> n;
		for (int i = n / 2; i >= 2; --i)
		{
			if (isPrime(i) && isPrime(n - i))
			{
				std::cout << i << ' ' << n - i << '\n';
				break ;
			}
		}
	}

	return 0;
}
