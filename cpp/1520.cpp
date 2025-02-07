#include <iostream>

int M, N, H;
int map[502][502];
bool visited[502][502];
int xdir[4] = {1, 0, -1, 0};
int ydir[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
	bool possible = false;

	if (x == M && y == N) {
		++H;
		return ;
	}

	for (int i = 0; i < 4; ++i) {
		int newx = x + xdir[i];
		int newy = y + ydir[i];
		if (newx < 1 || newx > M || newy < 1 || newy > N)
			continue ;
		if (map[x][y] <= map[newx][newy])
			continue ;
		possible = true;
		visited[newx][newy] = true;
		dfs(newx, newy);
		visited[newx][newy] = false;
	}

	if (possible == false) return ;
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> M >> N;
	for (int i = 1; i <= M; ++i) {
		for (int j = 1; j <= N; ++j) {
			std::cin >> map[i][j];
		}
	}

	visited[1][1] = true;
	dfs(1, 1);

	std::cout << H;

	return 0;
}