#include <iostream>

int N, M;
int board[302][302];
int visited[302][302];
int dc[2] = {1, 0};
int dr[2] = {0, 1};
int res;

void dfs(int row, int column) {
	if (row == M - 1 && column == N - 1) {
		res = 1;
		return ;
	}

	for (int i = 0; i < 2; ++i) {
		int nr = row + dr[i];
		int nc = column + dc[i];
		if (nr < 0 || nc < 0 || nr >= M || nc >= N) continue;
		if (visited[nr][nc] || !board[nr][nc]) continue;
		visited[nr][nc] = 1;
		dfs(nr, nc);
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int row = 0; row < M; ++row) {
		for (int column = 0; column < N; ++column) {
			std::cin >> board[row][column];
		}
	}

	visited[0][0] = true;
	dfs(0, 0);
	std::cout << (res ? "Yes" : "No");

	return 0;
}