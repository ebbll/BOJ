#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int r, s;
	std::cin >> r >> s;
	std::cout << s * 2 - r;

	return 0;
}