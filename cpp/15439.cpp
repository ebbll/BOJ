#include <iostream>

int N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	std::cout << (N - 1) * N;

	return 0;
}