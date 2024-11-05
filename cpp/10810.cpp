#include <iostream>

int N, M;
int i, j, k;
int B[102];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int x = 0; x < M; ++x) {
		std::cin >> i >> j >> k;
		for (int pos = i; pos <= j; ++pos) {
			B[pos] = k;
		}
	}
	for (int i = 1; i <= N; ++i) {
		std::cout << B[i] << ' ';
	}

	return 0;
}