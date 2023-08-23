#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int count = 0;
	for (int board = 0; board < 8; ++board)
	{
		std::string line;
		std::cin >> line;
		for (int i = board % 2; i < 8; i += 2)
		{
			if (line[i] == 'F')
				++count;
		}
	}
	std::cout << count;

	return 0;
}