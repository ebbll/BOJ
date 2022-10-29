#include <iostream>
#include <string>
#include <vector>
#include <queue>

int N, M, P;

int map[1000][1000];
std::vector<std::pair<int, int> > castle[9];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M >> P;
	std::vector<int> S(P);
	for (int i = 0; i < P; ++i)
	{
		std::cin >> S[i];
	}

	std::queue<std::pair<int, int> > Q[P];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			char input;
			std::cin >> input;
			if (input >= '1' && input <= '0' + P)
			{
				map[i][j] = static_cast<int>(input - '0');
				Q[map[i][j] - 1].push(std::make_pair(i, j));
			}
			else if (input == '#')
				map[i][j] = -1;
		}
	}

	while (true)
	{
		bool done = false;
		for (int player = 0; player < P; ++player)
		{
			int move = S[player];
			while (Q[player].empty() == false)
			{
				
				--move;
			}
		}
	}

	return 0;
}