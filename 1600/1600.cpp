#include <iostream>
#include <queue>
#include <tuple>

int board[300][300];
int visited[300][300];

int xdirMonkey[4] = {1, -1, 0, 0};
int ydirMonkey[4] = {0, 0, 1, -1};

int xdirHorse[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int ydirHorse[8] = {2, -2, 2, -2, 1, -1, 1, -1};

std::queue<std::tuple<int, int, int> > queue;

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int K, W, H;
	std::cin >> K >> W >> H;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			std::cin >> board[i][j];
		}
	}
	queue.push(std::make_tuple(0, 0, 0));
	visited[0][0] = 1;
	while (queue.empty() == false)
	{
		int count, x, y;
		std::tie(count, x, y) = queue.front();
		queue.pop();
		if (count < K)
		{
			for (int i = 0; i < 8; ++i)
			{
				int nx = x + xdirHorse[i];
				int ny = y + ydirHorse[i];
				if (nx < 0 || ny < 0 || nx >= W || nx >= H || board[ny][nx] || visited[ny][ny])
					continue ;
				queue.push(std::make_tuple(count + 1, nx, ny));
				visited[ny][nx] = 1;
			}
		}
		for (int i = 0; i < 4; ++i)
		{
			int nx = x + xdirMonkey[i];
			int ny = y + ydirMonkey[i];
			if (nx < 0 || ny < 0 || nx <= W || ny >= H || board[ny][nx] || visited[ny][ny])
				continue ;
			queue.push(std::make_tuple(count, nx, ny));
		}
	}

	return 0;
}