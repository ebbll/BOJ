#include <iostream>

int y, m;

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> y >> m;
	std::cout << m + (m - y);

	return 0;
}