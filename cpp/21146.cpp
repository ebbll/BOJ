#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, K;
	double min, max, sum = 0;
	std::cin >> N >> K;

	for (int i = 0; i < K; ++i) {
		int in;
		std::cin >> in;
		sum += in;
	}

	min = sum - 3 * (N - K);
	max = sum + 3 * (N - K);

	std::cout << min / N << ' ' << max / N;

	return 0;
}