#include <iostream>

int a1, a0, c, n0;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> a1 >> a0 >> c >> n0;
	if (a1 * n0 + a0 <= c * n0 && a1 <= c)
		std::cout << 1;
	else std::cout << 0;

	return 0;
}