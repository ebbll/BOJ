#include <iostream>
#include <vector>
#include <queue>

int map[20][20];
int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N, size = 2;
	std::pair<int, int> pos;
	std::cin >> N;
	std::vector<std::pair<int, int> > fishes;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cin >> map[i][j];
			if (map[i][j] == 9)
			{
				pos.first = i;
				pos.second = j;
				map[i][j] = 0;
			}
			else if (map[i][j] >= 1 && map[i][j] <= 6)
			{
				fishes.push_back(std::make_pair(i, j));
			}
		}
	}

	int res = 0;
	while (true)
	{
		if (fishes.empty())
			break ;
		// find closest fish to eat
		int destidx = 0;
		// find upper left fish to eat
		std::sort(fishes.begin(), fishes.end());
		destidx = 0;
		while (map[fishes[destidx].first][fishes[destidx].second] >= size)
		{
			++destidx;
		}
		int xdest = fishes[destidx].first;
		int ydest = fishes[destidx].second;
		if (map[xdest][ydest] > size)
			break ;
		int check[20][20];
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				check[i][j] = -1;
			}
		}
		check[pos.first][pos.second] = 0;
		std::queue<std::pair<int, int> > queue;
		queue.push(pos);
		std::cout << "push " << pos.first << ' ' << pos.second << '\n';
		while (queue.empty() == false)
		{
			int x = queue.front().first;
			int y = queue.front().second;
			queue.pop();
			for (int i = 0; i < 4; ++i)
			{
				int nx = x + xdir[i];
				int ny = y + ydir[i];
				if (nx < 0 || ny < 0 || nx >= N || ny >= N)
					continue ;
				if ((map[nx][ny] > size && map[nx][ny] <= 6) || check[nx][ny] != -1)
					continue ;
				check[nx][ny] = check[x][y] + 1;
				queue.push(std::make_pair(nx, ny));
				std::cout << "push " << nx << ' ' << ny << '\n';
			}
			for (int i = 0; i < N; ++i)
			{
				for (int j = 0; j < N; ++j)
				{
					std::cout << check[i][j] << ' ';
				}
				std::cout << '\n';
			}
		}
		if (check[xdest][ydest] >= 0)
		{
			if (map[xdest][ydest] == size)
				++size;
			map[xdest][ydest] = 0;
			map[pos.first][pos.second] = 0;
			pos.first = xdest;
			pos.second = ydest;
			fishes.erase(fishes.begin() + destidx);
			res += check[xdest][ydest];
		}
		else
			break ;
	}
	std::cout << res;

	return 0;
}