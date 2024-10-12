#include <iostream>

int RES = 0;
int N, C, K;

int main(void) {
	std::cin >> N;

	for (int i = 0; i < N; ++i) {
		std::cin >> C >> K;
		RES += C * K;
	}

	std::cout << RES;

	return 0;
}