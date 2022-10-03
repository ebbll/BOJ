#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int start = 0;
	int max = 0;
	for (int i = 0; i < 4; ++i)
	{
		int out, in;
		std::cin >> out >> in;
		start = start - out + in;
		if (start > max)
			max = start;
	}
	std::cout << max;

	return 0;
}