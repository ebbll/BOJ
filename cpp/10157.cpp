#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int rdir[4] = {1, 0, -1, 0};
	int cdir[4] = {0, 1, 0, -1};
	int map[1001][1001] = {0, };

	int C, R, K;
	std::cin >> C >> R >> K;
	if (K > C * R)
	{
		std::cout << 0;
	}
	else
	{
		int dir = 0;
		int r = 1;
		int c = 1;
		map[r][c] = 1;
		for (int loop = 0; loop < K - 1; ++loop)
		{
			int nr = r + rdir[dir];
			int nc = c + cdir[dir];
			if (nr < 1 || nc < 1 || nr > R || nc > C)
				dir = (dir + 1) % 4;
			else if (map[nr][nc] > 0)
				dir = (dir + 1) % 4;
			map[r + rdir[dir]][c + cdir[dir]] = map[r][c] + 1;
			r += rdir[dir];
			c += cdir[dir];
		}
		std::cout << c << ' ' << r << '\n';
	}

	return 0;
}
