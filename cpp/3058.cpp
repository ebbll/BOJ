#include <iostream>

int T, in, sum, min;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;

	for (int loop = 0; loop < T; ++loop) {
		sum = 0; min = 101;
		for (int i = 0; i < 7; ++i) {
			std::cin >> in;
			if (in % 2 == 0) {
				sum += in;
				if (in < min) min = in;
			}
		}
		std::cout << sum << ' ' << min << '\n';
	}

	return 0;
}