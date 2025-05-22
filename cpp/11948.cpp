#include <iostream>
#include <algorithm>

int in;
int asum, bsum;
int amin = 100, bmin = 100;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 4; ++i) {
		std::cin >> in;
		asum += in;
		amin = std::min(amin, in);
	}

	for (int i = 0; i < 2; ++i) {
		std::cin >> in;
		bsum += in;
		bmin = std::min(bmin, in);
	}

	std::cout << asum - amin + bsum - bmin;

	return 0;
}
