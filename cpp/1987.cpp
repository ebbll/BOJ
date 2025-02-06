#include <iostream>

int R, C, res;
char board[21][21];
bool visited[26];
int xdir[4] = {0, 1, 0, -1};
int ydir[4] = {1, 0, -1, 0};

void dfs(int x, int y, int dist) {
	bool isEnd = true;
	visited[board[x][y] - 'A'] = true;

	for (int i = 0; i < 4; ++i) {
		int newx = x + xdir[i];
		int newy = y + ydir[i];

		if (newx < 1 || newx > R || newy < 1 || newy > C) continue ;

		char nextChar = board[newx][newy];
		if (visited[nextChar - 'A']) continue ;
		isEnd = false;
		visited[nextChar - 'A'] = true;
		dfs(newx, newy, dist + 1);
		visited[nextChar - 'A'] = false;
	}

	if (isEnd) {
		res = std::max(res, dist);
		return ;
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> R >> C;
	for (int i = 1; i <= R; ++i)
		for (int j = 1; j <= C; ++j)
			std::cin >> board[i][j];

	visited[board[1][1] - 'A'] = true;
	dfs(1, 1, 1);

	std::cout << res;

	return 0;
}