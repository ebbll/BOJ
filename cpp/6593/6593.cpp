#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <tuple>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int zdir[6] = {1, -1, 0, 0, 0, 0};
	int ydir[6] = {0, 0, 1, -1, 0, 0};
	int xdir[6] = {0, 0, 0, 0, 1, -1};

	while (true)
	{
		int L, R, C;
		std::cin >> L >> R >> C;
		if (!L && !R && !C)
			break ;

		int dist[30][30][30];
		int e[3];
		for (int floor = 0; floor < L; ++floor)
		{
			for (int row = 0; row < R; ++row)
			{
				std::fill(dist[floor][row], dist[floor][row] + C, -1);
			}
		}

		std::string building[L][R];
		std::queue<std::tuple<int, int, int> > queue;
		for (int floor = 0; floor < L; ++floor)
		{
			for (int row = 0; row < R; ++row)
			{
				std::cin >> building[floor][row];
				std::string::iterator start = std::find(building[floor][row].begin(), building[floor][row].end(), 'S');
				std::string::iterator exit = std::find(building[floor][row].begin(), building[floor][row].end(), 'E');
				if (start != building[floor][row].end())
				{
					int column = start - building[floor][row].begin();
					queue.push(std::make_tuple(floor, row, column));
					dist[floor][row][column] = 0;
				}
				if (exit != building[floor][row].end())
				{
					int column = exit - building[floor][row].begin();
					e[0] = floor;
					e[1] = row;
					e[2] = column;
				}
			}
		}

		while (!queue.empty())
		{
			int z = std::get<0>(queue.front());
			int y = std::get<1>(queue.front());
			int x = std::get<2>(queue.front());
			queue.pop();
			for (int dir = 0; dir < 6; ++dir)
			{
				int nz = z + zdir[dir];
				int ny = y + ydir[dir];
				int nx = x + xdir[dir];
				if (nz < 0 || ny < 0 || nx < 0 || nz >= L || ny >= R || nx >= C)
					continue ;
				if (dist[nz][ny][nx] >= 0 || building[nz][ny][nx] == '#')
					continue ;
				queue.push(std::make_tuple(nz, ny, nx));
				dist[nz][ny][nx] = dist[z][y][x] + 1;
			}
		}

		int res = dist[e[0]][e[1]][e[2]];
		if (res == -1)
		{
			std::cout << "Trapped!\n";
		}
		else
		{
			std::cout << "Escaped in " << res << " minute(s).\n";
		}
	}

	return 0;
}
