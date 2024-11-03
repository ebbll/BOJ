#include <iostream>

int N, K;
int D[32][32];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		D[i][1] = 1;
		D[i][i] = 1;
	}
	for (int i = 2; i <= N; ++i) {
		for (int j = 2; j < N; ++j) {
			D[i][j] = D[i - 1][j - 1] + D[i - 1][j];
		}
	}
	std::cout << D[N][K];

	return 0;
}