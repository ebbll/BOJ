#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	for (int i = 0; i < N / 4; ++i) std::cout << "long ";
	std::cout << "int";

	return 0;
}