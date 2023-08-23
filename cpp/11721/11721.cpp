#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input;
	std::cin >> input;
	int chunk = input.length() / 10;
	int remain = input.length() % 10;
	for (int i = 0; i < chunk; ++i)
	{
		for (int start = 0; start < 10; ++start)
		{
			std::cout << input[i * 10 + start];
		}
		std::cout << '\n';
	}
	if (remain)
	{
		for (int start = 0; start < remain; ++start)
		{
			std::cout << input[chunk * 10 + start];
		}
	}

	return 0;
}