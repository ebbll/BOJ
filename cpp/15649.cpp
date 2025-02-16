#include <iostream>

int N, M;
int visited[9];
int sequence[9];

void dfs(int pos) {
	if (pos == M) {
		for (int i = 0; i < M; ++i) {
			std::cout << sequence[i] << ' ';
		}
		std::cout << '\n';
		return ;
	}

	for (int i = 1; i <= N; ++i) {
		if (!visited[i]) {
			visited[i] = 1;
			sequence[pos] = i;
			dfs(pos + 1);
			visited[i] = 0;
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