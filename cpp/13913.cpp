#include <iostream>
#include <queue>
#include <vector>
#include <deque>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> dist(100001, -1);
	std::vector<int> path(100001);
	std::queue<int> queue;

	int N, K;
	std::cin >> N >> K;
	dist[N] = 0;
	path[N] = N;
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
				dist[nx] = dist[x] + 1;
				queue.push(nx);
				path[nx] = x;
			}
		}
		{
			int nx = x - 1;
			if (nx >= 0 && nx <= 100000 && dist[nx] < 0)
			{
				dist[nx] = dist[x] + 1;
				queue.push(nx);
				path[nx] = x;
			}
		}
		{
			int nx = x + 1;
			if (nx >= 0 && nx <= 100000 && dist[nx] < 0)
			{
				dist[nx] = dist[x] + 1;
				queue.push(nx);
				path[nx] = x;
			}
		}
	}

	std::cout << dist[K] << '\n';

	std::deque<int> track = {K};
	while (track.front() != N)
	{
		track.push_front(path[track.front()]);
	}
	for (int i = 0; i < track.size(); ++i)
	{
		std::cout << track[i] << ' ';
	}


	return 0;
}