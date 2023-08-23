#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int dir[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

	int n, m;
	std::cin >> n >> m;
	int map[n][m];
	int dist[n][m];
	for (int i = 0; i < n; ++i)
		std::fill(dist[i], dist[i] + m, -1);
	dist[0][0] = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char in;
			std::cin >> in;
			map[i][j] = in - '0';
		}
	}

	std::queue<std::pair<int, int> > queue;
	queue.push(std::make_pair(0, 0));
	while (!queue.empty())
	{
		std::pair<int, int> curr = queue.front();
		int x = curr.first;
		int y = curr.second;
		queue.pop();
		for (int i = 0; i < 4; ++i)
		{
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (nx < 0 || ny < 0 || nx > n - 1 || nx > m - 1)
				continue ;
			if (dist[nx][ny] >= 0 || map[nx][ny] == 0)
				continue ;
			queue.push(std::make_pair(nx, ny));
			dist[nx][ny] = dist[x][y] + 1;
		}
	}

	std::cout << dist[n - 1][m - 1] + 1;

	return 0;
}
