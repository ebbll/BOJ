#include <iostream>
#include <queue>
#include <cmath>

int map[100][100];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cin >> map[i][j];
			if (map[i][j])
				map[i][j] = -1;
		}
	}

	int count = 1;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[i][j] == -1)
			{
				std::queue<std::pair<int, int> > numbering;
				numbering.push(std::make_pair(i, j));
				map[i][j] = count;
				while (numbering.empty() == false)
				{
					int x = numbering.front().first;
					int y = numbering.front().second;
					numbering.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = x + xdir[dir];
						int ny = y + ydir[dir];
						if (nx < 0 || ny < 0 || nx > N - 1 || ny > N - 1)
							continue;
						if (map[nx][ny] != -1)
							continue;
						numbering.push(std::make_pair(nx, ny));
						map[nx][ny] = count;
					}
				}
				++count;
			}
		}
	}

	std::vector<std::pair<std::pair<int, int>, int> > edges;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[i][j])
			{
				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = i + xdir[dir];
					int ny = j + ydir[dir];
					if (nx < 0 || ny < 0 || nx > N - 1 || ny > N - 1)
						continue;
					if (map[nx][ny] == 0)
					{
						edges.push_back(std::make_pair(std::make_pair(i, j), map[i][j]));
						break;
					}
				}
			}
		}
	}

	int res = 300;
	for (int i = 0; i < edges.size() - 1; ++i)
	{
		for (int j = i + 1; j < edges.size(); ++j)
		{
			if (edges[i].second == edges[j].second)
				continue;
			int xlen = edges[i].first.first - edges[j].first.first;
			int ylen = edges[i].first.second - edges[j].first.second;
			int bridge = std::abs(xlen) + std::abs(ylen) - 1;
			if (res > bridge)
				res = bridge;
		}
	}

	std::cout << res;

	return 0;
}