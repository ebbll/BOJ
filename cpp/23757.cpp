#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, m;
	std::cin >> n >> m;
	std::priority_queue<int> c;
	std::vector<int> w;
	for (int i = 0; i < n; ++i)
	{
		int in;
		std::cin >> in;
		c.push(in);
	}
	for (int i = 0; i < m; ++i)
	{
		int in;
		std::cin >> in;
		w.push_back(in);
	}
	for (int i = 0; i < m; ++i)
	{
		if (c.empty() || c.top() < w[i])
			break ;
		int remain = c.top() - w[i];
		c.pop();
		c.push(remain);
		w[i] = 0;
	}
	if (std::count(w.begin(), w.end(), 0) == w.size())
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}
