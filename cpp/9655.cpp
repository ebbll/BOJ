#include <iostream>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::cout << (N % 2 == 0 ? "CY" : "SK");

	return 0;
}