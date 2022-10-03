#include <iostream>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string	s1, s2;
	std::cin >> s1 >> s2;

	int	arr[26] = {0, };

	for (std::string::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		++arr[static_cast<int>(*it) - static_cast<int>('a')];
	}

	for (std::string::iterator it = s2.begin(); it != s2.end(); ++it)
	{
		--arr[static_cast<int>(*it) - static_cast<int>('a')];
	}

	int	ret = 0;
	for (int i = 0; i < 26; ++i)
	{
		ret += std::abs(arr[i]);;
	}
	std::cout << ret;

	return 0;
}
