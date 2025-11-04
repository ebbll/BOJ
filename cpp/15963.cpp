#include <iostream>

long long N, M;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;

	std::cout << (N == M);
	
	return 0;
}