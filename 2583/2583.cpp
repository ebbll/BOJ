#include <iostream>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int grid[100][100] = {0, };
	int xdir[4] = {1, -1, 0, 0};
	int ydir[4] = {0, 0, 1, -1};

	int M, N, K;
	std::cin >> M >> N >> K;
	for (int i = 0; i < K; ++i)
	{
		int ax, ay, bx, by;
		std::cin >> ax >> ay >> bx >> by;
		for (int y = ay; y < by; ++y)
		{
			for (int x = ax; x < bx; ++x)
			{
				grid[y][x] = 1;
			}
		}
	}

	std::queue<std::pair<int, int> > queue;
	std::priority_queue<int, std::vector<int>, std::greater<int> > log;
	int count = 0;
	for (int row = 0; row < M; ++row)
	{
		for (int column = 0; column < N; ++column)
		{
			int size;
			if (grid[row][column] == 0)
			{
				++count;
				size = 1;
				queue.push(std::make_pair(row, column));
				grid[row][column] = 1;
				while (queue.empty() == false)
				{
					int y = queue.front().first;
					int x = queue.front().second;
					queue.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = x + xdir[dir];
						int ny = y + ydir[dir];
						if (nx < 0 || ny < 0 || nx >= N || ny >= M)
							continue ;
						if (grid[ny][nx] == 1)
							continue ;
						++size;
						queue.push(std::make_pair(ny, nx));
						grid[ny][nx] = 1;
					}
				}
				log.push(size);
			}
		}
	}
	std::cout << count << '\n';
	while (log.empty() == false)
	{
		std::cout << log.top() << ' ';
		log.pop();
	}

	return 0;
}
