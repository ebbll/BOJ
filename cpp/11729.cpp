#include <iostream>

int func(int a, int b, int N)
{
	return 0;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::cout << func(1, 3, N);

	return 0;
}