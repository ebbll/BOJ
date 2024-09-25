#include <iostream>
#include <string>

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string S;
	unsigned long long L, H = 0;
	unsigned long long R = 31, M = 1234567891;
	unsigned long long ri = 1;

	std::cin >> L >> S;
	for (int i = 0; i < L; ++i) {
		H = (H + (S[i] - 'a' + 1) * ri) % M;
		ri = (ri * R) % M;
	}
	std::cout << H;

	return 0;
}
