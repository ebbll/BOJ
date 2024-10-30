#include <iostream>

int N;
int wine[10002];
int D[10002];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 1; i <= N; ++i) std::cin >> wine[i];

	D[1] = wine[1];
	D[2] = wine[1] + wine[2];
	for (int i = 3; i <= N; ++i) {
		D[i] = std::max(wine[i] + std::max(D[i - 2], D[i - 3] + wine[i - 1]), D[i - 1]);
	}

	std::cout << D[N];

	return 0;
}