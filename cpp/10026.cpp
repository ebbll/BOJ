#include <iostream>
#include <string>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	char color[3] = {'R', 'G', 'B'};
	int xdir[4] = {0, 1, 0, -1};
	int ydir[4] = {1, 0, -1, 0};
	int res1 = 0, res2 = 0;

	int n;
	std::cin >> n;
	std::string grid[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> grid[i];
	}

	for (int c = 0; c < 3; ++c)
	{
		std::queue<std::pair<int, int> > queue;
		int visited[100][100] = {0, };
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (visited[i][j])
					continue ;
				if (grid[i][j] == color[c])
				{
					++res1;
					queue.push(std::make_pair(i, j));
					visited[i][j] = 1;
				}
				while (queue.empty() == false)
				{
					int x = queue.front().first;
					int y = queue.front().second;
					queue.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = x + xdir[dir];
						int ny = y + ydir[dir];
						if (nx < 0 || ny < 0 || nx > n - 1 || ny > n - 1)
							continue ;
						if (grid[nx][ny] != color[c] || visited[nx][ny])
							continue;
						queue.push(std::make_pair(nx, ny));
						visited[nx][ny] = 1;
					}
				}
			}
		}
	}

	{
	std::queue<std::pair<int, int> > queue;
	int visited[100][100] = {0, };
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (visited[i][j])
				continue ;
			if (grid[i][j] == color[0] || grid[i][j] == color[1])
			{
				++res2;
				queue.push(std::make_pair(i, j));
				visited[i][j] = 1;
			}
			while (queue.empty() == false)
			{
				int x = queue.front().first;
				int y = queue.front().second;
				queue.pop();
				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = x + xdir[dir];
					int ny = y + ydir[dir];
					if (nx < 0 || ny < 0 || nx > n - 1 || ny > n - 1)
						continue ;
					if (grid[nx][ny] == color[2] || visited[nx][ny])
						continue;
					queue.push(std::make_pair(nx, ny));
					visited[nx][ny] = 1;
				}
			}
		}
	}
	}

	{
	std::queue<std::pair<int, int> > queue;
	int visited[100][100] = {0, };
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (visited[i][j])
				continue ;
			if (grid[i][j] == color[2])
			{
				++res2;
				queue.push(std::make_pair(i, j));
				visited[i][j] = 1;
			}
			while (queue.empty() == false)
			{
				int x = queue.front().first;
				int y = queue.front().second;
				queue.pop();
				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = x + xdir[dir];
					int ny = y + ydir[dir];
					if (nx < 0 || ny < 0 || nx > n - 1 || ny > n - 1)
						continue ;
					if (grid[nx][ny] != color[2] || visited[nx][ny])
						continue;
					queue.push(std::make_pair(nx, ny));
					visited[nx][ny] = 1;
				}
			}
		}
	}
	}

	std::cout << res1 << ' ' << res2;

	return 0;
}
