#include <iostream>

int main(void)
{
	int a, b;

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> a >> b;
	std::cout << a + b;

	return (0);
}