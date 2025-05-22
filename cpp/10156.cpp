#include <iostream>
#include <algorithm>

int K, N, M;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> K >> N >> M;
	std::cout << std::max(0, K * N - M);

	return 0;
}