#include <iostream>
#include <algorithm>

int A, B, C, D;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> A >> B >> C >> D;
	std::cout << std::min(A + D, B + C);
	return 0;
}