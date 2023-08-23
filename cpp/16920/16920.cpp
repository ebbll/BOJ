#include <iostream>
#include <string>
#include <vector>
#include <queue>

int N, M, P;

int map[1000][1000];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int S[9];
int R[9];

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M >> P;
	for (int i = 0; i < P; ++i)
	{
		std::cin >> S[i];
	}

	std::queue<std::pair<int, int> > Q[P];
	for (int i = 0; i < N; ++i)
	{
		std::string line;
		std::cin >> line;
		for (int j = 0; j < M; ++j)
		{
			char c = line[j];
			if (c >= '1' && c <= '0' + P)
			{
				map[i][j] = static_cast<int>(c - '0');
				Q[map[i][j] - 1].push(std::make_pair(i, j));
				++R[map[i][j] - 1];
			}
			else if (c == '#')
				map[i][j] = -1;
			else // c == '.'
				map[i][j] = 0;
		}
	}

	while (true)
	{
		for (int player = 0; player < P; ++player)
		{
			int move = S[player];
			while (Q[player].empty() == false && move--)
			{
				int size = Q[player].size();
				for (int loop = 0; loop < size; ++loop)
				{
					int y = Q[player].front().first;
					int x = Q[player].front().second;
					Q[player].pop();

					for (int dir = 0; dir < 4; ++dir)
					{
						int ny = y + ydir[dir];
						int nx = x + xdir[dir];
						if (nx < 0 || ny < 0 || nx > M - 1 || ny > N - 1)
							continue;
						if (map[ny][nx] != 0)
							continue;
						Q[player].push(std::make_pair(ny, nx));
						map[ny][nx] = player + 1;
						++R[player];
					}
				}
			}
		}

		bool done = true;
		for (int player = 0; player < P; ++player)
		{
			if (Q[player].empty() == false)
			{
				done = false;
				break;
			}
		}
		if (done)
			break;
	}

	for (int player = 0; player < P; ++player)
	{
		std::cout << R[player] << ' ';
	}


	return 0;
}