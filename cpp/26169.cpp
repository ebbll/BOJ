#include <iostream>

int r, c;
int board[5][5];
int visited[5][5];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool res;

void dfs(int x, int y, int step, int count) {
	if (count == 2) {
		res = true;
		return ;
	}
	if (step == 3) return ;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue ;
		if (visited[nx][ny] || board[nx][ny] == -1) continue ;
		visited[nx][ny] = true;
		dfs(nx, ny, step + 1, count + board[nx][ny]);
		visited[nx][ny] = false;
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			std::cin >> board[i][j];
		}
	}
	std::cin >> r >> c;

	visited[r][c] = 1;
	dfs(r, c, 0, 0);

	std::cout << (res ? 1 : 0);

	return 0;
}