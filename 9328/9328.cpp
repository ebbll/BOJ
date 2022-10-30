#include <iostream>
#include <string>
#include <vector>

int T, H, W;

char map[100][100];

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;
	for (int loop = 0; loop < T; ++loop)
	{
		std::cin >> H >> W;
		bool key[26] = {false, };
		bool lock[26] = {false, };
		std::vector<std::pair<int, int> > keylist[26];
		std::vector<std::pair<int, int> > locklist[26];
		std::vector<std::pair<int, int> > doclist;
		for (int i = 0; i < H; ++i)
		{
			for (int j = 0; j < W; ++j)
			{
				std::cin >> map[i][j];
				if (map[i][j] == '$')
					doclist.push_back(std::make_pair(i, j));
				else if (map[i][j] >= 'A' && map[i][j] <= 'Z')
				{
					lock[static_cast<int>(map[i][j] - 'A')] = true;
					locklist[static_cast<int>(map[i][j] - 'A')].push_back(std::make_pair(i, j));
				}
				else if (map[i][j] >= 'a' && map[i][j] <= 'z')
				{
					key[static_cast<int>(map[i][j] - 'a')] = true;
					keylist[static_cast<int>(map[i][j] - 'a')].push_back(std::make_pair(i, j));
				}
			}
		}
		std::string keyinput;
		std::cin >> keyinput;

		bool visited[100][100] = {false, };
	}

	return 0;
}