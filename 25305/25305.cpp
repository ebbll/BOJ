#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, K;
	std::cin >> N >> K;

	std::vector<int> list(N);
	for (int i = 0; i < N; ++i)
	{
		std::cin >> list[i];
	}
	std::sort(list.begin(), list.end());
	std::cout << list[N - K];

	return 0;
}