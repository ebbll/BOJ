#include <iostream>

int N;
int A[1002], D[1002];
int max;

int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> N;
	for (int i = 0; i < N; ++i) std::cin >> A[i];
	std::fill(D, D + N, 1);
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < i; ++j)
			if (A[j] < A[i]) D[i] = std::max(D[i], D[j] + 1);

	for (int i = 0; i < N; ++i) if (max < D[i]) max = D[i];
	std::cout << max;
}