#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> dist(100001, -1);
	std::queue<int> queue;

	int N, K;
	std::cin >> N >> K;
	dist[N] = 0;
	queue.push(N);
	while (queue.empty() == false)
	{
		int x = queue.front();
		if (x == K)
			break ;
		queue.pop();
		{
			int nx = x * 2;
			if (nx >= 0 && nx <= 100000 && dist[nx] < 0)
			{
				dist[nx] = dist[x];
				queue.push(nx);
			}
		}
		{
			int nx = x - 1;
			if (nx >= 0 && nx <= 100000 && dist[nx] < 0)
			{
				dist[nx] = dist[x] + 1;
				queue.push(nx);
			}
		}
		{
			int nx = x + 1;
			if (nx >= 0 && nx <= 100000 && dist[nx] < 0)
			{
				dist[nx] = dist[x] + 1;
				queue.push(nx);
			}
		}
	}
	std::cout << dist[K];

	return 0;
}