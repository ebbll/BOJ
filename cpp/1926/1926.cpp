#include <iostream>
#include <queue>

int	main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int dir[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

	int n, m;
	std::cin >> n >> m;
	int paper[n][m];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			std::cin >> paper[i][j];


	int count = 0;
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (paper[i][j] == 0)
				continue ;

			int area = 0;
			std::queue<std::pair<int, int> > queue;
			if (paper[i][j] == 1)
			{
				queue.push(std::make_pair(i, j));
				paper[i][j] = 0;
				++area;
				++count;
			}
			while (!queue.empty())
			{
				std::pair<int, int> curr = queue.front();
				int x = curr.first;
				int y = curr.second;
				queue.pop();
				for (int loop = 0; loop < 4; ++loop)
				{
					int nx = x + dir[loop][0];
					int ny = y + dir[loop][1];
					if (nx < 0 || ny < 0 || nx > n - 1 || ny > m - 1)
						continue ;
					if (paper[nx][ny] == 0)
						continue ;
					queue.push(std::make_pair(nx, ny));
					paper[nx][ny] = 0;
					++area;
				}
			}
			if (area > max)
				max = area;
		}
	}

	std::cout << count << '\n';
	if (count == 0)
		std::cout << "0\n";
	else
		std::cout << max << '\n';

	return 0;
}
