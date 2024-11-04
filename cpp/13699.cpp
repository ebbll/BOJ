#include <iostream>

int N;
long long D[35];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	D[0] = 1;
	for (int i = 1; i <= N; ++i) {
		for (int x = 0; x < i; ++x) {
			D[i] += D[x] * D[i - 1 - x];
		}
	}
	std::cout << D[N];

	return 0;
}