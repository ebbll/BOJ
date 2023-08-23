#include <iostream>
#include <queue>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int dist[1000002];
	std::queue<int> queue;

	int F, S, G, U, D;
	int dir[2];

	std::cin >> F >> S >> G >> U >> D;
	std::fill(dist, dist + F + 1, -1);
	dir[1] *= -1;

	queue.push(S);
	dist[S] = 0;

	while (queue.empty() == false)
	{
		int curr = queue.front();
		//if (curr == G)
		//	break ;
		queue.pop();
		for (int nx : {curr + U, curr - D})
		{
			if (nx > F || nx <= 0 || dist[nx] != -1)
				continue ;
			queue.push(nx);
			dist[nx] = dist[curr] + 1;
		}
	}
	if (dist[G] == -1)
	{
		std::cout << "use the stairs";
	}
	else
	{
		std::cout << dist[G];
	}

	return 0;
}
