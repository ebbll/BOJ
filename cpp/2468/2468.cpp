#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int grid[100][100];
	int xdir[4] = {1, -1, 0, 0};
	int ydir[4] = {0, 0, 1, -1};

	int n;
	std::cin >> n;
	int min = 100, max = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int in;
			std::cin >> in;
			grid[i][j] = in;
			if (in > max)
				max = in;
			if (in < min)
				min = in;
		}
	}

	min = min >= 2 ? min - 1 : 1;

	int res = 0;
	for (int test = 0; test <= max; ++test)
	{
		int visited[100][100] = {0, };
		std::queue<std::pair<int, int> > queue;
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (visited[i][j] || grid[i][j] <= test)
					continue ;
				
				queue.push(std::make_pair(i, j));
				visited[i][j] = 1;
				++count;

				while (queue.empty() == false)
				{
					int x = queue.front().first;
					int y = queue.front().second;
					queue.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = x + xdir[dir];
						int ny = y + ydir[dir];
						if (nx < 0 || ny < 0 || nx >= n || ny >= n)
							continue ;
						if (visited[nx][ny] || grid[nx][ny] <= test)
							continue ;
						queue.push(std::make_pair(nx, ny));
						visited[nx][ny] = 1;
					}
				}
			}
		}
		res = count > res ? count : res;
	}
	std::cout << res;

	return 0;
}
