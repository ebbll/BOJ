#include <iostream>
#include <algorithm>

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, max;
	std::cin >> a >> b >> c;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if(a == b && b == c)
		std::cout << 10000 + a * 1000;
	else if(a == b || a == c)
		std::cout << 1000 + a * 100;
	else if(b == c)
		std::cout << 1000 + b * 100;
	else
		std::cout << max * 100;
	return (0);
}
