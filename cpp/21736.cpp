#include <iostream>

int N, M;
int count;
int start[2];
char map[600][600];
bool visited[600][600];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int row, int column) {
	if (map[row][column] == 'P') ++count;

	for (int i = 0; i < 4; ++i) {
		int nx = row + dx[i]; int ny = column + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue ;
		if (visited[nx][ny] || map[nx][ny] == 'X') continue ;
		visited[nx][ny] = true;
		dfs(nx, ny);
	}
}

int main(void) {
	std::cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			std::cin >> map[i][j];
			if (map[i][j] == 'I') {
				start[0] = i;
				start[1] = j;
			}
		}
	}

	visited[start[0]][start[1]] = true;
	dfs(start[0], start[1]);

	if (count) std::cout << count;
	else std::cout << "TT";

	return 0;
}