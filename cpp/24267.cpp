#include <iostream>

long long N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::cout << N * (N - 1) * (N - 2) / 6 << '\n' << 3;

	return 0;
}