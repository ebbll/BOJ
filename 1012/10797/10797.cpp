#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int day, count = 0;
	std::cin >> day;
	for (int i = 0; i < 5; ++i)
	{
		int number;
		std::cin >> number;
		if (number == day)
			++count;
	}
	std::cout << count;

	return 0;
}