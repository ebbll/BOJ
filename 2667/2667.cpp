#include <iostream>
#include <string>
#include <queue>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int xdir[4] = {1, -1, 0, 0};
	int ydir[4] = {0, 0, 1, -1};
	std::string map[25];

	int N;
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> map[i];
	}

	int count = 0;
	std::queue<std::pair<int, int> > queue;
	std::priority_queue<int, std::vector<int>, std::greater<int> > log;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[i][j] == '1')
			{
				++count;
				int size = 1;
				queue.push(std::make_pair(i, j));
				map[i][j] = '0';
				while (queue.empty() == false)
				{
					int x = queue.front().first;
					int y = queue.front().second;
					queue.pop();
					for (int dir = 0; dir < 4; ++dir)
					{
						int nx = x + xdir[dir];
						int ny = y + ydir[dir];
						if (nx < 0 || ny < 0 || nx >= N || ny >= N)
							continue ;
						if (map[nx][ny] == '0')
							continue ;
						++size;
						queue.push(std::make_pair(nx, ny));
						map[nx][ny] = '0';
					}
				}
				log.push(size);
			}
		}
	}

	std::cout << count << '\n';
	while (log.empty() == false)
	{
		std::cout << log.top() << '\n';
		log.pop();
	}

	return 0;
}
