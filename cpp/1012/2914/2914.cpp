#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int A, I;
	std::cin >> A >> I;
	std::cout << (A * (I - 1) + 1);

	return 0;
}