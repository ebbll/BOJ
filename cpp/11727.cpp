#include <iostream>

int N;
int D[1002];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	D[1] = 1, D[2] = 3;
	for (int i = 3; i <= N; ++i) {
		D[i] = (D[i - 1] + 2 * D[i - 2]) % 10007;
	}
	std::cout << D[N];

	return 0;
}