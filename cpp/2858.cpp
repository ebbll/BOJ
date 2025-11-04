#include <iostream>

int R, B;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> R >> B;

	for (int i = 1; i * i <= R + B; ++i) {
		if ((R + B) % i == 0) {
			if (2 * i + 2 * ((R + B) / i) - 4 == R) {
				std::cout << (R + B) / i << " " << i;
				break ;
			}
		}
	}

	return 0;
}