#include <iostream>
#include <queue>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int	board[1002][1002];
	int	dist[1002][1002];
	int	n, m;
	int	dx[4] = {1,0,-1,0};
	int	dy[4] = {0,1,0,-1};

	std::cin >> m >> n;
	std::queue<std::pair<int, int> >	queue;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> board[i][j];
			if (board[i][j] == 1)
			{
				std::pair<int, int>	pair;
				pair.first = i;
				pair.second = j;
				queue.push(pair);
			}
			if (board[i][j] == 0)
				dist[i][j] = -1;
		}
	}
	while (!queue.empty())
	{
		std::pair<int, int>	cur;
		cur = queue.front();
		queue.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int	nx = cur.first + dx[dir];
			int	ny = cur.second + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue ;
			if (dist[nx][ny] >= 0)
				continue ;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			std::pair<int, int>	pair;
			pair.first = nx;
			pair.second = ny;
			queue.push(pair);
		}
	}
	int	ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (dist[i][j] == -1)
			{
				std::cout << -1;
				return 0;
			}
			ans = std::max(ans, dist[i][j]);
		}
	}
	std::cout << ans;

	return 0;
}
