#include <iostream>

int N;
long long W[82];
long long H[82];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	W[1] = 1;
	H[1] = 1;
	std::cin >> N;
	for (int i = 2; i <= N; ++i) {
		if (i % 2) {
			W[i] = W[i - 1];
			H[i] = H[i - 1] + W[i - 1];
		} else {
			W[i] = W[i - 1] + H[i - 1];
			H[i] = H[i - 1];
		}
	}

	std::cout << 2 * W[N] + 2 * H[N];

	return 0;
}