#include <iostream>
#include <queue>
#include <algorithm>

int board[300][300];
int visited[300][300][31];

int xdirMonkey[4] = {1, -1, 0, 0};
int ydirMonkey[4] = {0, 0, 1, -1};

int xdirHorse[8] = {1, 1, -1, -1, 2, 2, -2, -2};
int ydirHorse[8] = {2, -2, 2, -2, 1, -1, 1, -1};

std::queue<std::pair<std::pair<int, int>, int> > queue;

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

	std::vector<int> res;
	queue.push(std::make_pair(std::make_pair(0, 0), K));
	visited[0][0][K] = 1;
	while (queue.empty() == false)
	{
		int y = queue.front().first.first;
		int x = queue.front().first.second;
		int m = queue.front().second;
		queue.pop();

		if (x == W - 1 && y == H - 1)
			res.push_back(visited[y][x][m]);

		if (m > 0)
		{
			for (int i = 0; i < 8; ++i)
			{
				int ny = y + ydirHorse[i];
				int nx = x + xdirHorse[i];
				if (nx < 0 || ny < 0 || nx > W - 1 || ny > H - 1)
					continue;
				if (board[ny][nx] == 1)
					continue;
				queue.push(std::make_pair(std::make_pair(ny, nx), m - 1));
				visited[ny][nx][m - 1] = visited[y][x][m] + 1;
			}
		}
		for (int i = 0; i < 4; ++i)
		{
			int ny = y + ydirMonkey[i];
			int nx = x + xdirMonkey[i];
			if (nx < 0 || ny < 0 || nx > W - 1 || ny > H - 1)
				continue;
			if (board[ny][nx] || visited[ny][nx][m])
				continue;
			queue.push(std::make_pair(std::make_pair(ny, nx), m));
			visited[ny][nx][m] = visited[y][x][m] + 1;
		}
	}

	if (res.size() == 0)
		std::cout << "-1";
	else
		std::cout << *std::min_element(res.begin(), res.end()) - 1;

	return 0;
}