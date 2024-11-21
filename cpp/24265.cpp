#include <iostream>

long long N, res;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	res = (N - 1) * N / 2;
	std::cout << res << '\n' << 2;

	return 0;
}