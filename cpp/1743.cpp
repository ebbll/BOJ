#include <iostream>
#include <queue>

int map[101][101];
int rdir[4] = {1, -1, 0, 0};
int cdir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, M, K;
	std::cin >> N >> M >> K;
	for (int loop = 0; loop < K; ++loop)
	{
		int r, c;
		std::cin >> r >> c;
		map[r][c] = 1;
	}

	int maxsize = 0;
	std::queue<std::pair<int, int> > queue;
	for (int row = 1; row <= N; ++row)
	{
		for (int column = 1; column <= M; ++column)
		{
			if (map[row][column] == 1)
			{
				queue.push(std::make_pair(row, column));
				map[row][column] = 0;
				int size = 1;
				while (queue.empty() == false)
				{
					int r = queue.front().first;
					int c = queue.front().second;
					queue.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nr = r + rdir[dir];
						int nc = c + cdir[dir];
						if (nr < 1 || nc < 1 || nr > N || nc > M)
							continue ;
						if (map[nr][nc] == 0)
							continue ;
						queue.push(std::make_pair(nr, nc));
						map[nr][nc] = 0;
						++size;
					}
				}
				if (size > maxsize)
					maxsize = size;
			}
		}
	}
	std::cout << maxsize;

	return 0;
}
