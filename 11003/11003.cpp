#include <iostream>
#include <deque>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n, l;
	std::cin >> n >> l;
	std::deque<int>	deque;
	for (int i = 0; i < n; ++i)
	{
		int	input;
		std::cin >> input;
		deque.push_back(input);
	}
	std::deque<int> ret;
	std::deque<int> index;
	for (int i = 0; i < n; ++i)
	{
		if (ret.empty() == false)
		{
			if (index.front() < i - l + 1)
			{
				ret.pop_front();
				index.pop_front();
			}
		}
		while (ret.empty() == false && ret.back() > deque[i])
		{
			ret.pop_back();
			index.pop_back();
		}
		ret.push_back(deque[i]);
		index.push_back(i);
		std::cout << ret.front() << " ";
	}

	return 0;
}
