#include <iostream>
#include <string>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int ret = 0;
	int n;
	std::string str;
	std::cin >> n >> str;
	for (int i = 0; i < n; ++i)
	{
		ret += str[i] - '0';
	}
	std::cout << ret;

	return 0;
}
