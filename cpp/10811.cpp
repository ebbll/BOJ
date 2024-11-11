#include <iostream>

int N, M, i, j;

int b[102];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int a = 1; a <= N; ++a) b[a] = a;

	for (int x = 0; x < M; ++x) {
		std::cin >> i >> j;
		for (int l = 0; l <= (j - i) / 2; ++l) {
			int temp = b[i + l];
			b[i + l] = b[j - l];
			b[j - l] = temp;
		}
	}

	for (int a = 1; a <= N; ++a) std::cout << b[a] << ' ';

	return 0;
}