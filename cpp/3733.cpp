#include <iostream>

int N, S;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (std::cin >> N >> S) {
		std::cout << (S / (N + 1)) << "\n";
	}

	return 0;
}