#include <iostream>
#include <vector>

int T, N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;

	for (int x = 0; x < T; ++x) {
		std::cin >> N;
		std::vector<int> P(N);
		for (int i = 0; i < N; ++i) {
			std::cin >> P[i];
		}

		int starti = 0;
		long long int profit = 0;
	
		while (starti < N) {
			int max = 0, maxi = 0;
			for (int i = N - 1; i >= starti; --i) {
				if (max < P[i]) {
					max = P[i];
					maxi = i;
				}
			}

			for (int i = starti; i < maxi; ++i) {
				profit += max - P[i];
			}

			starti = maxi + 1;
		}

		std::cout << profit << '\n';

	}

	return 0;
}