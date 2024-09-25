#include <iostream>
using namespace std;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, T, P, res = 0;
	int input[6] = {0, };

	std::cin >> N;
	for (int i = 0; i < 6; ++i) {
		std::cin >> input[i];
	}
	std::cin >> T >> P;

	for (int i = 0; i < 6; ++i) {
		res += input[i] / T;
		res = input[i] % T == 0 ? res : res + 1;
	}

	std::cout << res << '\n';
	std::cout << N / P << ' ' << N % P;

	return 0;
}
