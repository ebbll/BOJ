#include <iostream>

int N, X, Y;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> X >> Y;
		std::cout << (X < Y ? "NO BRAINS" : "MMM BRAINS") << '\n';
	}

	return 0;
}