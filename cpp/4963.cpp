#include <iostream>
#include <memory.h>

#define LAND 1

int W, H;
int map[52][52];
int visited[52][52];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void dfs(int r, int c) {
	for (int i = 0; i < 8; ++i) {
		int nr = r + dx[i];
		int nc = c + dy[i];
		if (nr < 0 || nr >= H || nc < 0 || nc >= W) continue ;
		if (! map[nr][nc] == LAND || visited[nr][nc]) continue ;
			visited[nr][nc] = 1;
			dfs(nr, nc);
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	while (true) {
		int res = 0;

		std::cin >> W >> H;
		if (!W && !H) break ;

		for (int r = 0; r < H; ++r)
			for (int c = 0; c < W; ++c)
				std::cin >> map[r][c];

		for (int r = 0; r < H; ++r) {
			for (int c = 0; c < W; ++c) {
				if (map[r][c] && !visited[r][c]) {
					visited[r][c] = 1;
					dfs(r, c);
					++res;
				}
			} 
		}

		std::cout << res << '\n';
		memset(visited, 0, sizeof(int) * 52 * 52);
	}

	return 0;
}