#include <iostream>

int N, in;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	for (int i = 0; i < 9; ++i) {
		std::cin >> in;
		N -= in;
	}
	std::cout << N;

	return 0;
}