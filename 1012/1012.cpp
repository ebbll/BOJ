/*
 * 유기농 배추
 */

#include <iostream>
#include <queue>

int T, M, N, K;
int xdir[4] = {1, 0, -1, 0};
int ydir[4] = {0, 1, 0, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;
	for (int loop = 0; loop < T; ++loop)
	{
		int map[50][50] = {0, };
		std::cin >> M >> N >> K;
		for (int i = 0; i < K; ++i)
		{
			int X, Y;
			std::cin >> X >> Y;
			map[X][Y] = 1;
		}
		std::queue<std::pair<int, int> > queue;
		int count = 0;
		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (map[i][j] == 1)
				{
					++count;
					map[i][j] = 0;
					queue.push(std::make_pair(i, j));
					while (queue.empty() == false)
					{
						int xpos = queue.front().first;
						int ypos = queue.front().second;
						queue.pop();
						for (int dir = 0; dir < 4; ++dir)
						{
							int nx = xpos + xdir[dir];
							int ny = ypos + ydir[dir];
							if (nx < 0 || nx > M - 1 || ny < 0 || ny > N - 1)
								continue ;
							if (map[nx][ny] == 0)
								continue ;
							map[nx][ny] = 0;
							queue.push(std::make_pair(nx, ny));
						}
					}
				}
			}
		}
		std::cout << count << '\n';
	}

	return 0;
}
