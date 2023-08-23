#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int visited[100001] = {0, };

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, K;
	std::cin >> N >> K;

	std::queue<std::pair<int, int> > queue;
	std::vector<int> res;
	queue.push(std::make_pair(N, 0));
	visited[N] = 1;
	int min = std::abs(N - K);
	while (queue.empty() == false)
	{
		int pos = queue.front().first;
		int step = queue.front().second;
		queue.pop();
		visited[pos] = 1;
		if (pos == K)
		{
			res.push_back(step);
			if (step < min)
				min = step;
			continue ;
		}
		if (pos - 1 >= 0 && visited[pos - 1] == 0)
		{
			queue.push(std::make_pair(pos - 1, step + 1));
		}
		if (pos + 1 <= 100000 && visited[pos + 1] == 0)
		{
			queue.push(std::make_pair(pos + 1, step + 1));
		}
		if (pos * 2 <= 100000 && visited[pos * 2] == 0)
		{
			queue.push(std::make_pair(pos * 2, step + 1));
		}
	}
	std::cout << min << '\n' << std::count(res.begin(), res.end(), min);

	return 0;
}