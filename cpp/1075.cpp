#include <iostream>
#include <iomanip>

long long N, F;
long long base;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> F;

	base = N / 100;
	for (int i = 0; i <= 99; ++i) {
		if ((base * 100 + i) % F != 0) continue;
		std::cout << std::setfill('0') << std::setw(2) << i;
		break;
	}

	return 0;
}