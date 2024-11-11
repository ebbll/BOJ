#include <iostream>

int N, M;
int B[10002];
int start, end, mid, sum, max, res;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> B[i];
		sum += B[i];
		if (B[i] > max) max = B[i];
	}
	std::cin >> M;

	if (sum <= M) {
		std::cout << max;
		return 0;
	}

	max = 1;
	start = 1; end = 100000;
	mid = (start + end) / 2;
	while (start <= end) {
		int total = 0;

		for (int i = 0; i < N; ++i) {
			if (B[i] <= mid) total += B[i];
			else total += mid;
		}

		if (total > M) {
			end = mid - 1;
		} else {
			if (mid > res) res = mid;
			start = mid + 1;
		}
		mid = (start + end) / 2;
	}

	std::cout << mid;

	return 0;
}