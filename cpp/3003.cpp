#include <iostream>

int main(void)
{
	int set[6] = {1, 1, 2, 2, 2, 8};
	int out[6];
	for (int i = 0; i < 6; ++i)
	{
		std::cin >> out[i];
		out[i] = set[i] - out[i];
	}
	for (int i = 0; i < 6; ++i)
	{
		std::cout << out[i] << ' ';
	}

	return 0;
}
