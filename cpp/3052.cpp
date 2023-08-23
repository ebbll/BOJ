#include <iostream>
#include <set>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::set<int> mod;
	for (int i = 0; i < 10; ++i)
	{
		int input;
		std::cin >> input;
		mod.insert(input % 42);
	}
	std::cout << mod.size();

	return 0;
}
