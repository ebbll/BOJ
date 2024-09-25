#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	if (N == 0) {
		std::cout << 0;
		return 0;
	}

	std::vector<int> A(N);
	for (int i = 0; i < N; ++i) {
		std::cin >> A[i];
	}

	int x = round(double(N) * 0.15);
	int sum = 0;
	std::sort(A.begin(), A.end());
	for (int i = x; i < N - x; ++i) {
		sum += A[i];
	}
	std::cout << round((double)sum / (N - 2 * x));

	return 0;
}
