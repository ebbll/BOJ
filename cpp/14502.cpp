#include <iostream>
#include <vector>

#define EMPTY 0
#define WALL 1
#define VIRUS 2

int N, M;
int maxArea;

// dfs
int map[8][8];
int copyMap[8][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// wall 세우기
int wall[3];
bool visited[64];
std::vector<std::pair<int, int> > blanks;

void calArea() {
	int area = 0;

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			if (copyMap[i][j] == 0) ++area;

	if (area > maxArea) maxArea = area;
}

void dfs(int x, int y) {
	bool possible = false;

	for (int dir = 0; dir < 4; ++dir) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		if (copyMap[nx][ny] != EMPTY) continue;
		possible = true;
		copyMap[nx][ny] = VIRUS;
		dfs(nx, ny);
	}

	if (!possible) return;
}


void solve() {
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			copyMap[i][j] = map[i][j];

	for (int i = 0; i < 3; ++i) {
		int x = blanks[wall[i]].first;
		int y = blanks[wall[i]].second;
		copyMap[x][y] = WALL;
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (copyMap[i][j] == VIRUS) {
				dfs(i, j);
			}
		}
	}

	calArea();
}

void setWalls(int start, int count) {
	if (count == 3) {
		solve();
		return ;
	}

	for (size_t i = start; i < blanks.size(); ++i) {
		if (!visited[i]) {
			visited[i] = true;
			wall[count] = i;
			setWalls(i + 1, count + 1);
			visited[i] = false;
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			std::cin >> map[i][j];
			if (map[i][j] == EMPTY) blanks.push_back({i, j});
		}
	}

	setWalls(0, 0);
	std::cout << maxArea;

	return 0;
}