#include <iostream>

int N;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int res = 1;
	std::cin >> N;
	for (int i = 0; i < N; ++i) {
		res *= 2;
	}
	std::cout << res;

	return 0;
}