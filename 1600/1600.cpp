#include <iostream>
#include <queue>
#include <algorithm>

int board[200][200];
bool visited[200][200][31];

int xdirMonkey[4] = {1, -1, 0, 0};
int ydirMonkey[4] = {0, 0, 1, -1};

int xdirHorse[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int ydirHorse[8] = {2, -2, 2, -2, 1, -1, 1, -1};


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

	std::queue<std::pair<std::pair<int, int>, std::pair<int, int> > > queue;
	queue.push(std::make_pair(std::make_pair(0, 0), std::make_pair(0, K)));
	visited[0][0][K] = 1;
	while (queue.empty() == false)
	{
		int y = queue.front().first.first;
		int x = queue.front().first.second;
		int m = queue.front().second.first;
		int a = queue.front().second.second;
		queue.pop();

		if (x == W - 1 && y == H - 1)
		{
			std::cout << m;
			return 0;
		}

		if (a > 0)
		{
			for (int i = 0; i < 8; ++i)
			{
				int ny = y + ydirHorse[i];
				int nx = x + xdirHorse[i];
				if (nx < 0 || ny < 0 || nx > W - 1 || ny > H - 1)
					continue;
				if (board[ny][nx] == 1 || visited[ny][nx][a - 1] == true)
					continue;
				queue.push(std::make_pair(std::make_pair(ny, nx), std::make_pair(m + 1, a - 1)));
				visited[ny][nx][a - 1] = true;
			}
		}

		for (int i = 0; i < 4; ++i)
		{
			int ny = y + ydirMonkey[i];
			int nx = x + xdirMonkey[i];
			if (nx < 0 || ny < 0 || nx > W - 1 || ny > H - 1)
				continue;
			if (board[ny][nx] == 1 || visited[ny][nx][a] == true)
				continue;
			queue.push(std::make_pair(std::make_pair(ny, nx), std::make_pair(m + 1, a)));
			visited[ny][nx][a] = true;
		}
	}

	std::cout << "-1";

	return 0;
}