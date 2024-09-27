#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int K, N;
	long long low = 1, high = 1, mid;
	long long res = 1;
	std::cin >> K >> N;

	std::vector<long long> L(K);
	for (int i = 0; i < K; ++i) {
		std::cin >> L[i];
		if (L[i] > high) high = L[i];
	}

	while (low <= high) {
		int frag = 0;
		mid = low + (high - low) / 2;
		for (int i = 0; i < K; ++i) frag += L[i] / mid;

		if (frag < N) {
			high = mid - 1;
		} else {
			low = mid + 1;
			if (mid > res) res = mid;
		}
	}

	std::cout << res;

	return 0;
}
