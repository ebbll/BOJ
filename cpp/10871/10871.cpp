#include <iostream>

int main(void)
{
	int n, x, input;

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> n;
	std::cin >> x;
	for (int i = 0; i < n; i++)
	{
		std::cin >> input;
		if (input < x)
			std::cout << input << " ";
	}
	return (0);
}
