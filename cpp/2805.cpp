#include <iostream>
#include <vector>

long long N, M, H;
long long high, mid, low = 0;
long long sum;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	std::vector<long long> heights(N);

	for (long long i = 0; i < N; ++i)
	{
		std::cin >> heights[i];
		if (heights[i] > high)
			high = heights[i];
	}

	while (low <= high)
	{
		sum = 0;
		mid = (high + low) / 2;
		for (long long i = 0; i < N; ++i)
			if (heights[i] > mid)
				sum += heights[i] - mid;

		if (sum < M)
			high = mid - 1;
		else
		{
			low = mid + 1;
			H = mid;
		}
	}

	std::cout << H;

	return 0;
}