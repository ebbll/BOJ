#include <iostream>

int M, N;
int map[502][502];
int visited[502][502];
int xdir[4] = {1, 0, -1, 0};
int ydir[4] = {0, 1, 0, -1};

int dfs(int x, int y) {
	if (x == M && y == N) return 1;

	if (visited[x][y] == -1) {
		visited[x][y] = 0;
		for (int i = 0; i < 4; ++i) {
			int newx = x + xdir[i];
			int newy = y + ydir[i];
			if (newx < 1 || newx > M || newy < 1 || newy > N)
				continue ;
			if (map[x][y] <= map[newx][newy])
				continue ;
			visited[x][y] += dfs(newx, newy);
		}
	}

	return visited[x][y];
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> M >> N;
	for (int i = 1; i <= M; ++i) {
		for (int j = 1; j <= N; ++j) {
			std::cin >> map[i][j];
			visited[i][j] = -1;
		}
	}

	std::cout << dfs(1, 1);

	return 0;
}