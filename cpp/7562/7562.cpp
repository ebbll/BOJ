#include <iostream>
#include <cstring>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int xdir[8] = {2, 2, -2, -2, 1, 1, -1, -1};
	int ydir[8] = {1, -1, 1, -1, 2, -2, 2, -2};

	int t;
	std::cin >> t;
	for (int loop = 0; loop < t; ++loop)
	{
		int dist[300][300];
		memset(dist, -1, sizeof(dist));
		std::queue<std::pair<int, int> > queue;
		int l, sx, sy, dx, dy;
		std::cin >> l >> sx >> sy >> dx >> dy;
		queue.push(std::make_pair(sx, sy));
		dist[sx][sy] = 0;

		while (queue.empty() == false)
		{
			int x = queue.front().first;
			int y = queue.front().second;
			queue.pop();
			if (x == dx && y == dy)
			{
				std::cout << dist[x][y]<< '\n';
				break;
			}

			for (int dir = 0; dir < 8; ++dir)
			{
				int nx = x + xdir[dir];
				int ny = y + ydir[dir];
				if (nx < 0 || ny < 0 || nx > l - 1 || ny > l - 1)
					continue ;
				if (dist[nx][ny] >= 0)
					continue ;
				queue.push(std::make_pair(nx, ny));
				dist[nx][ny] = dist[x][y] + 1;
			}
		}
	}

	return 0;
}
