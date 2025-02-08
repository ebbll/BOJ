#include <iostream>

int N;
int low, res, in;
int bar[100002];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> bar[i];
	}

	for (int i = N - 1; i >= 0; --i) {
		if (low < bar[i]) {
			++res;
			low = bar[i];
		}
	}

	std::cout << res;

	return 0;
}