#include <iostream>
#include <vector>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, max = 0;

	std::cin >> N;
	std::vector<int> V(N);

	for (int i = 0; i < N; ++i) {
		std::cin >> V[i];
		if (max < V[i]) max = V[i];
	}
	for (int i = 1; i < N - 1; ++i) {
		max = std::max(max, V[i] + std::min(V[i - 1], V[i + 1]));
	}
	std::cout << max;

	return 0;
}