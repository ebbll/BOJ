#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int xdir[4] = {0, 1, 0, -1};
	int ydir[4] = {1, 0, -1, 0};

	int r, c;
	std::cin >> r >> c;
	std::string map[r];
	int dist[r][c];
	std::queue<std::pair<int, int> > queue;
	std::queue<std::pair<int, int> > fire;
	for (int i = 0; i < r; ++i)
	{
		std::cin >> map[i];
		std::string::iterator j = std::find(map[i].begin(), map[i].end(), 'J');
		if (j != map[i].end())
		{
			queue.push(std::make_pair(i, j - map[i].begin()));
		}
		std::string::iterator f = std::find(map[i].begin(), map[i].end(), 'F');
		{
			fire.push(std::make_pair(i, f - map[i].begin()));
		}
		std::fill(dist[i], dist[i] + c, -1);
	}
	dist[queue.front().first][queue.front().second] = 0;

	bool succeed = false;
	while (queue.empty() == false)
	{
		int x = queue.front().first;
		int y = queue.front().second;
		queue.pop();
		int nx;
		int ny;
		for (int i = 0; i < 4; ++i)
		{
			nx = x + xdir[i];
			ny = y + ydir[i];
			if (nx < 0 || ny < 0 || nx > r - 1 || ny > c - 1)
				continue ;
			if (dist[nx][ny] >= 0 || map[nx][ny] == '#' || map[nx][ny] == 'F')
				continue ;
			if (nx == 0 || ny == 0 || nx == r - 1 || ny == c - 1)
			{
				succeed = true;
				dist[nx][ny] = dist[x][y] + 1;
				break ;
			}
			queue.push(std::make_pair(nx, ny));
			dist[nx][ny] = dist[x][y] + 1;

		}
		if (succeed)
		{
			std::cout << dist[nx][ny] + 1;
			return 0;
		}
	}
	std::cout << "IMPOSSIBLE";

	return 0;
}
