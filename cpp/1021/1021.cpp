#include <iostream>
#include <deque>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	n, m;
	std::cin >> n >> m;
	std::deque<int>	deque;
	std::deque<int>	out;
	int dir;
	int	ret = 0;
	for (int i = 0; i < n; ++i)
	{
		deque.push_back(i + 1);
	}
	for (int i = 0; i < m; ++i)
	{
		int	x;
		std::cin >> x;
		out.push_back(x);
	}

	for (int i = 0; i < m; ++i)
	{
		std::deque<int>::iterator	it = std::find(deque.begin(), deque.end(), out[i]);
		int	dist = std::distance(deque.begin(), it);
		if (dist > deque.size() - dist)
		{
			dir = -1;
			dist = deque.size() - dist;
		}
		else
			dir = 1;
		for (int rot = 0; rot < dist; ++rot)
		{
			if (dir == 1)
			{
				deque.push_back(deque.front());
				deque.pop_front();
			}
			else
			{
				deque.push_front(deque.back());
				deque.pop_back();
			}
		}
		deque.pop_front();
		ret += dist;
	}
	std::cout << ret << "\n";

	return 0;
}
