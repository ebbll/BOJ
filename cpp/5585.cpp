#include <iostream>

int N, res = 0;
int charge[6] = {500, 100, 50, 10, 5, 1};

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N;
	N = 1000 - N;
	
	for (int i = 0; i < 6; i++) {
		res += N / charge[i];
		N %= charge[i];
	}
	std::cout << res;

	return 0;
}