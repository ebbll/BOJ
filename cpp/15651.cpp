#include <iostream>

int N, M;
int res[8];

void dfs(int level) {
	if (level == M) {
		for (int i = 0; i < M; ++i)
			std::cout << res[i] << " ";
		std::cout << "\n";
	}

	else {
		for (int i = 1; i <= N; ++i) {
			res[level] = i;
			dfs(level + 1);
		}
	}
}

int main(void) {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::cin >> N >> M;

	dfs(0);

	return 0;
}