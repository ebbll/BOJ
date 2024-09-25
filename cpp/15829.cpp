#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	char c;
	unsigned long long L, H = 0;
	unsigned long long R = 31, M = 1234567891;
	unsigned long long moduler[50] = {1, };

	for (int i = 1; i < 50; ++i) {
		moduler[i] = (moduler[i - 1] * R) % M;
	}

	std::cin >> L;
	for (int i = 0; i < L; ++i) {
		std::cin >> c;
		H = (H + (c - 'a' + 1) * moduler[i]) % M;
	}
	std::cout << H;

	return 0;
}
