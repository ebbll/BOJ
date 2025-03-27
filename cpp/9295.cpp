#include <iostream>

int N;
int x, y;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		std::cin >> x >> y;
		std::cout << "Case " << i + 1 << ": " << x + y << "\n";
	}

	return 0;
}