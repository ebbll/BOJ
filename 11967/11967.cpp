#include <iostream>
#include <vector>
#include <queue>

int N, M;
int res = 1;

bool light[101][101];
bool visited[101][101];
std::vector<std::pair<int, int> > S[101][101];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < M; ++i)
	{
		int x, y, a, b;
		std::cin >> x >> y >> a >> b;
		S[x][y].push_back(std::make_pair(a, b));
	}

	std::queue<std::pair<int, int> > Q;
	light[1][1] = true;
	visited[1][1] = true;
	Q.push(std::make_pair(1, 1));
	while (Q.empty() == false)
	{
		int y = Q.front().first;
		int x = Q.front().second;
		Q.pop();

		bool on = false;
		for (int i = 0; i < S[y][x].size(); ++i)
		{
			if (light[S[y][x][i].first][S[y][x][i].second])
				continue;
			on = true;
			light[S[y][x][i].first][S[y][x][i].second] = true;
			++res;
		}

		if (on)
		{
			for (int i = 1; i <= 100; ++i)
			{
				for (int j = 1; j <= 100; ++j)
				{
					visited[i][j] = false;
				}
			}
			visited[y][x] = true;
			Q.empty();
		}

		for (int dir = 0; dir < 4; ++dir)
		{
			int ny = y + ydir[dir];
			int nx = x + xdir[dir];
			if (nx < 1 || ny < 1 || nx > N || ny > N)
				continue;
			if (visited[ny][nx] == true || light[ny][nx] == false)
				continue;
			Q.push(std::make_pair(ny, nx));
			visited[ny][nx] = true;
		}
	}
	std::cout << res;

	return 0;
}