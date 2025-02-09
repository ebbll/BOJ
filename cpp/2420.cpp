#include <iostream>

int main(void) {
	long long  N, M;
	std::cin >> N >> M;
	std::cout << (N < M ? M - N : N - M);
	return 0;
}