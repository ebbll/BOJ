#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string	s1, s2;
		std::cin >> s1 >> s2;
		std::vector<int>	vec(26, 0);
		for (std::string::iterator it = s1.begin(); it != s1.end(); ++it)
		{
			++vec.at(static_cast<int>(*it) - static_cast<int>('a'));
		}
		for (std::string::iterator it = s2.begin(); it != s2.end(); ++it)
		{
			--vec.at(static_cast<int>(*it) - static_cast<int>('a'));
		}
		if (std::count(vec.begin(), vec.end(), 0) == 26)
			std::cout << "Possible\n";
		else
			std::cout << "Impossible\n";
	}

	return 0;
}
