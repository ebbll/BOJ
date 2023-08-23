#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int xdir[6] = {0, 1, 0, -1, 0, 0};
	int ydir[6] = {1, 0, -1, 0, 0, 0};
	int zdir[6] = {0, 0, 0, 0, 1, -1};
	bool mature = true;

	int box[100][100][100];
	int dist[100][100][100];
	memset(dist, -1, sizeof(dist));
	std::queue<std::tuple<int, int, int>> queue;

	int M, N, H;
	std::cin >> M >> N >> H;

	for (int z = 0; z < H; ++z)
	{
		for (int y = 0; y < N; ++y)
		{
			for (int x = 0; x < M; ++x)
			{
				int in;
				std::cin >> in;
				box[z][y][x] = in;
				if (in == 1)
				{
					queue.push(std::make_tuple(z, y, x));
					dist[z][y][x] = 0;
				}
			}
		}
	}

	while (queue.empty() == false)
	{
		std::tuple<int, int, int> front = queue.front();
		int z = std::get<0>(front);
		int y = std::get<1>(front);
		int x = std::get<2>(front);
		queue.pop();
		for (int i = 0; i < 6; ++i)
		{
			int nz = z + zdir[i];
			int ny = y + ydir[i];
			int nx = x + xdir[i];
			if (nz < 0 || ny < 0 || nx < 0|| nz > H - 1 || ny > N - 1 || nx > M - 1)
				continue ;
			if (dist[nz][ny][nx] >= 0 || box[nz][ny][nx] != 0)
			{
				continue ;
			}
			dist[nz][ny][nx] = dist[z][y][x] + 1;
			box[nz][ny][nx] = 1;
			queue.push(std::make_tuple(nz, ny, nx));
		}
	}

	for (int z = 0; z < H; ++z)
	{
		for (int y = 0; y < N; ++y)
		{
			if (std::find(box[z][y], box[z][y] + M, 0) != box[z][y] + M)
			{
				mature = false;
				break ;
			}
		}
		if (mature == false)
		{
			std::cout << "-1";
			return 0;
		}
	}

	int max = 0;
	for (int z = 0; z < H; ++z)
	{
		for (int y = 0; y < N; ++y)
		{
			int newmax = *std::max_element(dist[z][y], dist[z][y] + M);
			if (newmax > max)
			{
				max = newmax;
			}
		}
		if (mature == false)
			break ;
	}

	std::cout << max;

	return 0;
}
