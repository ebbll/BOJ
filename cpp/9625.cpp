#include <iostream>

#define A 0
#define B 1

int K;
int D[2][47];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	D[A][0] = 1;
	D[B][0] = 0;

	std::cin >> K;

	for (int i = 1; i <= K; ++i) {
		D[A][i] = D[B][i - 1];
		D[B][i] = D[A][i - 1] + D[B][i - 1];
	}

	std::cout << D[A][K] << ' ' << D[B][K];

	return 0;
}