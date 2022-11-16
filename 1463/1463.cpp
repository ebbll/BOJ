#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::vector<int> D(N + 1);
	D[1] = 0;
	for (int i = 2; i <= N; ++i)
	{
		int min = D[i - 1] + 1;
		if (i % 3 == 0)
		{
			if (min > D[i / 3] + 1)
			{
				min = D[i / 3] + 1;
			}
		}
		if (i % 2 == 0)
		{
			if (min > D[i / 2] + 1)
			{
				min = D[i / 2] + 1;
			}
		}
		D[i] = min;
	}
	std::cout << D[N];

	return 0;
}