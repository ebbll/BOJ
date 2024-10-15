#include <iostream>
#include <vector>
#include <algorithm>

int N, in, min = 300000;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::vector<int> W(N * 2);
	for (int i = 0; i < N * 2; ++i) std::cin >> W[i];
	std::sort(W.begin(), W.end());

	for (int i = 0; i < N; ++i)
		if (min > W[i] + W[2 * N - i - 1]) min = W[i] + W[2 * N - i - 1];

	std::cout << min;

	return 0;
}