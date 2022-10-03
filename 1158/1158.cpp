#include <iostream>
#include <list>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n, k;
	std::cin >> n >> k;
	std::list<int>	list;
	std::list<int>	res;
	std::list<int>::iterator	it;
	for (int i = 0; i < n; ++i)
	{
		list.push_back(i + 1);
		if (i + 1 == k)
		{
			it = list.end();
			--it;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		res.push_back(*it);
		it = list.erase(it);
		if (it == list.end())
			++it;
		for (int z = 0; z < k - 1; ++z)
		{
			++it;
			if (it == list.end())
				++it;
		}
	}
	std::list<int>::iterator z = res.begin();
	std::cout << "<";
	for (int i = 0; i < n; ++i)
	{
		std::cout << *z;
		if (i < n - 1)
			std::cout << ", ";
		++z;
	}
	std::cout << ">\n";

	return 0;
}