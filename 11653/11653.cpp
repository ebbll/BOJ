#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	while (N > 1)
	{
		int i = 2;
		while (true)
		{
			if (N % i == 0)
			{
				std::cout << i << "\n";
				N /= i;
				break ;
			}
			++i;
		}
	}

	return 0;
}