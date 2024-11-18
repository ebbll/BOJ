#include <iostream>

int T;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int coin[4] = {25, 10, 5, 1};

	std::cin >> T;
	for (int loop = 0; loop < T; ++loop) {
		int n;
		std::cin >> n;
		for (int i = 0; i < 4; ++i) {
			std::cout << n / coin[i] << ' ';
			n %= coin[i];
		}
		std::cout << '\n';
	}

	return 0;
}