#include <iostream>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string str;
	std::cin >> str;

	char s = str[0];
	int chunk = 1;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] != s)
		{
			++chunk;
			s = str[i];
		}
	}
	std::cout << chunk / 2;

	return 0;
}
