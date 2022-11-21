#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::vector<int> ropes(N);
	for (int i = 0; i < N; ++i)
	{
		std::cin >> ropes[i];
	}
	std::sort(ropes.begin(), ropes.end());
	int max = 0;
	for (int i = 0; i < N; ++i)
	{
		int cal = ropes[i] * (N - i);
		if (cal > max)
			max = cal;
	}
	std::cout << max;

	return 0;
}