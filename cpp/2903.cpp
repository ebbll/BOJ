#include <iostream>

int N;
int len[17];
int D[17];

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	len[0] = 2;
	D[0] = 4;
	for (int i = 1; i <= 15; ++i) {
		len[i] = len[i - 1] * 2 - 1;
		D[i] = len[i] * len[i];
	}

	std::cin >> N;
	std::cout << D[N];

	return 0;
}