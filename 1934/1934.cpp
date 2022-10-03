#include <iostream>

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	int n, a, b;

	std::cin >> n;
	while (n--)
	{
		std::cin >> a >> b;
		std::cout << (a * b) / gcd(a, b) << '\n';
	}
}