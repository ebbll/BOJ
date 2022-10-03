#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;
	std::deque<int> deque;
	std::vector<int> res;
	for (int i = 0; i < n; ++i)
	{
		int num;
		std::cin >> num;
		deque.push_back(num);
	}
	int curr = 0;
	while (true)
	{
		if (res.size() == n)
			break ;
		res.push_back(curr + 1);
		int move = deque[curr];
		if (move > 0)
		{
			for (int i = 0; i < move; ++i)
			{
				while (std::find(res.begin(), res.end(), (curr + 1) % n) == res.end())
					curr = (curr + 1) % n;
			}
		}
		else
		{
			for (int i = 0; i < move * -1; ++i)
			{
				while (std::find(res.begin(), res.end(), (curr + n - 1) % n) == res.end())
					curr = (curr + n - 1) % n;
			}
		}
	}
	for (int i = 0; i < res.size(); ++i)
	{
		std::cout << res[i] << ' ';
	}

	return 0;
}
