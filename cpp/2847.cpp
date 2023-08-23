#include <iostream>
#include <vector>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<int> levels(N);
	for (int i = 0; i < N; ++i)
	{
		std::cin >> levels[i];
	}

	int res = 0;
	for (int i = N - 2; i >= 0; --i)
	{
		if (levels[i] >= levels[i + 1])
		{
			int count = levels[i] - levels[i + 1] + 1;
			res += count;
			levels[i] -= count;
		}
	}
	std::cout << res;

	return 0;
}