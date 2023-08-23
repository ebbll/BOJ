#include <iostream>
#include <string>
#include <vector>
#include <queue>

int T, H, W;

int xdir[4] = {1, -1, 0, 0};
int ydir[4] = {0, 0, 1, -1};

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> T;
	std::vector<int> answer(T);
	for (int loop = 0; loop < T; ++loop)
	{
		char map[100][100];
		bool visited[100][100] = {false, };
		bool key[26] = {false, };
		int res = 0;

		std::vector<std::pair<int, int> > entrylist;
		std::queue<std::pair<int, int> > Q;

		std::cin >> H >> W;
		for (int i = 0; i < H; ++i)
		{
			for (int j = 0; j < W; ++j)
			{
				std::cin >> map[i][j];
			}
		}

		std::string keyinput;
		std::cin >> keyinput;
		if (keyinput != "0")
		{
			for (int i = 0; i < keyinput.length(); ++i)
			{
				key[static_cast<int>(keyinput.at(i) - 'a')] = true;
			}
		}

		for (int i = 0; i < H; ++i)
		{
			for (int j = 0; j < W; ++j)
			{
				if (i == 0 || i == H - 1 || j == 0 || j == W - 1)
				{
					if (map[i][j] != '*')
					{
						bool entry = false;
						if (map[i][j] == '$')
						{
							++res;
							map[i][j] = '.';
							entry = true;
						}
						else if (map[i][j] >= 'a' && map[i][j] <= 'z')
						{
							key[static_cast<int>(map[i][j] - 'a')] = true;
							map[i][j] = '.';
							entry = true;
						}
						else if (map[i][j] >= 'A' && map[i][j] <= 'Z')
						{
							if (key[static_cast<int>(map[i][j] - 'A')] == true)
							{
								map[i][j] = '.';
								entry = true;
							}
						}
						else // map[i][j] == '.'
						{
							entry = true;
						}
						if (entry == true)
						{
							entrylist.push_back(std::make_pair(i, j));
							Q.push(std::make_pair(i, j));
							visited[i][j] = true;
						}
					}
				}
			}
		}

		if (entrylist.size() == 0)
		{
			answer[loop] = 0;
			continue;
		}

		while (Q.empty() == false)
		{
			int y = Q.front().first;
			int x = Q.front().second;
			Q.pop();

			for (int dir = 0; dir < 4; ++dir)
			{
				int ny = y + ydir[dir];
				int nx = x + xdir[dir];
				if (nx < 0 || ny < 0 || nx > W - 1 || ny > H - 1)
					continue;
				if (visited[ny][nx] || map[ny][nx] == '*')
					continue;
				if (map[ny][nx] >= 'a' && map[ny][nx] <= 'z')
				{
					if (key[static_cast<int>(map[ny][nx] - 'a')] == false)
					{
						key[static_cast<int>(map[ny][nx] - 'a')] = true;
						for (int i = 0; i < 100; ++i)
						{
							for (int j = 0; j < 100; ++j)
							{
								visited[i][j] = false;
							}
						}
						Q.empty();
						for (int i = 0; i < H; ++i)
						{
							for (int j = 0; j < W; ++j)
							{
								if (i == 0 || i == H - 1 || j == 0 || j == W - 1)
								{
									if (map[i][j] >= 'A' && map[i][j] <= 'Z')
									{
										if (key[static_cast<int>(map[i][j] - 'A')] == true)
										{
											map[i][j] = '.';
											entrylist.push_back(std::make_pair(i, j));
										}
									}
								}
							}
						}
						for (int i = 0; i < entrylist.size(); ++i)
						{
							Q.push(entrylist[i]);
							visited[entrylist[i].first][entrylist[i].second] = true;
						}
						map[ny][nx] = '.';
						break;
					}
					map[ny][nx] = '.';
					Q.push(std::make_pair(ny, nx));
					visited[ny][nx] = true;
				}
				else if (map[ny][nx] >= 'A' && map[ny][nx] <= 'Z')
				{
					if (key[static_cast<int>(map[ny][nx] - 'A')] == true)
					{
						map[ny][nx] = '.';
						Q.push(std::make_pair(ny, nx));
						visited[ny][nx] = true;
					}
				}
				else if (map[ny][nx] == '.')
				{
					Q.push(std::make_pair(ny, nx));
					visited[ny][nx] = true;
				}
				else // map[ny][nx] == '$'
				{
					++res;
					map[ny][nx] = '.';
					Q.push(std::make_pair(ny, nx));
					visited[ny][nx] = true;
				}
			}
		}

		answer[loop] = res;
	}

	for (int i = 0; i < T; ++i)
	{
		std::cout << answer[i] << '\n';
	}

	return 0;
}