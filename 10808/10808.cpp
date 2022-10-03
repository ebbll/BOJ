#include <iostream>
#include <vector>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> vec(26, 0);

	std::string str;
	std::cin >> str;

	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		++(vec.at(static_cast<int>(*it) - static_cast<int>('a')));
	}

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << " ";
	}

	return 0;
}
