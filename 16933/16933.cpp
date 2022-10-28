#include <iostream>
#include <queue>
#include <string>
#include <tuple>

int N, M, K;

std::string map[1000];
bool visited[1000][1000][11];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M >> K;

	for (int i = 0; i < N; ++i)
	{
		std::cin >> map[i];
	}

	std::queue<std::pair<std::pair<int, int>, std::tuple<int, int, bool> > > Q;
	Q.push(std::make_pair(std::make_pair(0, 0), std::make_tuple(1, K, true)));
	visited[0][0][K] = true;

	while (Q.empty() == false)
	{
		int y = Q.front().first.first;
		int x = Q.front().first.second;
		int m = std::get<0>(Q.front().second);
		int a = std::get<1>(Q.front().second);
		int day = std::get<2>(Q.front().second);
		Q.pop();

		if (y == N - 1 && x == M - 1)
		{
			std::cout << m;
			return 0;
		}

		for (int i = 0; i < 4; ++i)
		{
			int ny = y + ydir[i];
			int nx = x + xdir[i];
			if (nx < 0 || ny < 0 || nx > M - 1 || ny > N - 1)
				continue;
			if (map[ny][nx] == '0' && visited[ny][nx][a] == false)
			{
				Q.push(std::make_pair(std::make_pair(ny, nx), std::make_tuple(m + 1, a, !day)));
				visited[ny][nx][a] = true;
			}
			else if (map[ny][nx] == '1' && visited[ny][nx][a - 1] == false && a > 0)
			{
				if (day)
				{
					Q.push(std::make_pair(std::make_pair(ny, nx), std::make_tuple(m + 1, a - 1, !day)));
					visited[ny][nx][a - 1] = true;
				}
				else
				{
					Q.push(std::make_pair(std::make_pair(y, x), std::make_tuple(m + 1, a, !day)));
				}
			}
		}
	}

	std::cout << "-1";

	return 0;
}