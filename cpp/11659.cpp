#include <iostream>
#include <vector>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M, input;
	std::cin >> N >> M;

	std::vector<int> sum(N + 1, 0);

	for (int x = 0; x < N; ++x) {
		std::cin >> input;
		sum[x + 1] = sum[x] + input;
	}

	for (int x = 0; x < M; ++x) {
		int i, j;
		std::cin >> i >> j;
		std::cout << sum[j] - sum[i - 1] << '\n';
	}

	return 0;
}