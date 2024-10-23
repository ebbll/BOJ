#include <iostream>

int N, K;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> K;
		for (int x = 0; x < K; ++x) std::cout << '=';
		std::cout << '\n';
	}

	return 0;
}