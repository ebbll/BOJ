#include <iostream>
#include <queue>
#include <string>

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

	std::queue<std::pair<std::pair<int, int>, std::pair<int, int> > > queue;
	queue.push(std::make_pair(std::make_pair(0, 0), std::make_pair(1, K)));
	visited[0][0][K] = true;

	while (queue.empty() == false)
	{
		int y = queue.front().first.first;
		int x = queue.front().first.second;
		int m = queue.front().second.first;
		int a = queue.front().second.second;
		queue.pop();

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
			if (map[ny][nx] == '1' && visited[ny][nx][a - 1] == false && a > 0)
			{
				queue.push(std::make_pair(std::make_pair(ny, nx), std::make_pair(m + 1, a - 1)));
				visited[ny][nx][a - 1] = true;
			}
			else if (map[ny][nx] == '0' && visited[ny][nx][a] == false)
			{
				queue.push(std::make_pair(std::make_pair(ny, nx), std::make_pair(m + 1, a)));
				visited[ny][nx][a] = true;
			}
		}
	}

	std::cout << "-1";

	return 0;
}