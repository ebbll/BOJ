#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int A, D, K;
	std::cin >> A >> D >> K;
	int mul = 0;
	while (true)
	{
		if (D > 0)
		{
			if (A + D * mul > K)
			{
				std::cout << 'X';
				return 0;
			}
		}
		else
		{
			if (A + D * mul < K)
			{
				std::cout << 'X';
				return 0;
			}
		}
		if (A + D * mul == K)
		{
			std::cout << mul + 1; 
			return 0;
		}
		++mul;
	}

	return 0;
}